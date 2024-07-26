#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

class bank {
    char name[100], add[200], y;
    int balance;

public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};

void bank::open_account() {
    cout << "\033[1;33;42mEnter your full name ::   \033[0m";
    cin.ignore();
    cin.getline(name, 100);
    cout << "\033[1;33;42mEnter your address :: \033[0m";
    cin.ignore();
    cin.getline(add, 200);
    cout << "\033[1;33;42mWhat type of account you want to saving (s) or current(c) ::   \033[0m";
    cin >> y;
    cout << "\033[1;33;42mEnter amount for deposit ::   \033[0m";
    cin >> balance;
    cout << "\033[1;32;42mYour account is created \033[0m\n";
}

void bank::deposit_money() {
    int a;
    cout << "\033[1;34;42mEnter how much money you deposit  ::    \033[0m";
    cin >> a;
    balance += a;
    cout << "\033[1;32;42mYour total amount deposit ::      \033[0m" << balance;
}

void bank::display_account() {
    cout << "\033[1;35;42mYour full name ::     \033[0m" << name << endl;
    cout << "\033[1;35;42mYour  address ::  \033[0m" << add << endl;
    cout << "\033[1;35;42mType of account you want   ::   \033[0m" << y << endl;
    cout << "\033[1;35;42mCurrent balance in your account ::   \033[0m" << balance << endl;
}

void bank::withdraw_money() {
    float amount;
    cout << "\033[1;34;42mWithdraw :: \033[0m";
    cout << "\033[1;34;42mEnter amount to withdraw ::  \033[0m";
    cin >> amount;
    balance -= amount;
    cout << "\033[1;32;42mNow total amount left  ::    \033[0m" << balance;
}

int main() {
    int r, x;

    bank ob;
    do {
        cout << "\033[1;41m1) OPEN ACCOUNT\033[0m\n";
        cout << "\033[1;41m2) DEPOSIT MONEY\033[0m\n";
        cout << "\033[1;41m3) WITHDRAW MONEY\033[0m\n";
        cout << "\033[1;41m4) DISPLAY ACCOUNT\033[0m\n";
        cout << "\033[1;41m5) EXIT\033[0m\n";
        cout << "SELECT THE OPTION: ";
        cin >> r;
        switch (r) {
            case 1:
                ob.open_account();
                break;
            case 2:
                ob.deposit_money();
                break;
            case 3:
                ob.withdraw_money();
                break;
            case 4:
                ob.display_account();
                break;
            case 5:
                return 0;
            default:
                cout << "This is not an option. Try again.\n";
        }
        cout << "\nDo you want to select next option? Then press: \033[1;33mY\033[0m\n";
        cout << "\nIf you want to exit then press: \033[1;31mN\033[0m\n";
        x = getch();
    } while (x == 'y' || x == 'Y');

    return 0;
}
