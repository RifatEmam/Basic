#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

const string folderName = "Private";
const string lockedFolderName = "Control Panel.{21EC2020-3AEA-1069-A2DD-08002B30309D}";
const string password = "YOUR-PASSWORD";

void lockFolder() {
    if (MoveFile(folderName.c_str(), lockedFolderName.c_str())) {
        SetFileAttributes(lockedFolderName.c_str(), FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM);
        cout << "Folder locked successfully.\n";
    } else {
        cout << "Error locking folder. Ensure it exists.\n";
    }
}

void unlockFolder() {
    string inputPassword;
    cout << "Enter password to unlock: ";
    cin >> inputPassword;

    if (inputPassword == password) {
        SetFileAttributes(lockedFolderName.c_str(), FILE_ATTRIBUTE_NORMAL);
        if (MoveFile(lockedFolderName.c_str(), folderName.c_str())) {
            cout << "Folder unlocked successfully.\n";
        } else {
            cout << "Error unlocking folder.\n";
        }
    } else {
        cout << "Invalid password.\n";
    }
}

void createFolder() {
    if (CreateDirectory(folderName.c_str(), NULL)) {
        cout << "Private folder created successfully.\n";
    } else {
        cout << "Folder already exists or could not be created.\n";
    }
}

int main() {
    int choice;
    cout << "1. Lock Folder\n2. Unlock Folder\n3. Create Folder\nChoose an option: ";
    cin >> choice;

    switch (choice) {
        case 1:
            lockFolder();
            break;
        case 2:
            unlockFolder();
            break;
        case 3:
            createFolder();
            break;
        default:
            cout << "Invalid choice.\n";
    }
    return 0;
}

