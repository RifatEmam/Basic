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
    cout << "\033[1;33mEnter your full name ::   \033[0m";
    cin.ignore();
    cin.getline(name, 100);
    cout << "\033[1;33mEnter your address :: \033[0m";
    cin.ignore();
    cin.getline(add, 200);
    cout << "\033[1;33mWhat type of account you want to saving (s) or current(c) ::   \033[0m";
    cin >> y;
    cout << "\033[1;33mEnter amount for deposit ::   \033[0m";
    cin >> balance;
    cout << "\033[1;32mYour account is created \033[0m\n";
}

void bank::deposit_money() {
    int a;
    cout << "\033[1;34mEnter how much money you deposit  ::    \033[0m";
    cin >> a;
    balance += a;
    cout << "\033[1;32mYour total amount deposit ::      \033[0m" << balance;
}

void bank::display_account() {
    cout << "\033[1;35mYour full name ::     \033[0m" << name << endl;
    cout << "\033[1;35mYour  address ::  \033[0m" << add << endl;
    cout << "\033[1;35mType of account you want   ::   \033[0m" << y << endl;
    cout << "\033[1;35mCurrent balance in your account ::   \033[0m" << balance << endl;
}

void bank::withdraw_money() {
    float amount;
    cout << "\033[1;34mWithdraw :: \033[0m";
    cout << "\033[1;34mEnter amount to withdraw ::  \033[0m";
    cin >> amount;
    balance -= amount;
    cout << "\033[1;32mNow total amount left  ::    \033[0m" << balance;
}

int main() {
    int r, x;

    bank ob;
    do {
        cout << "1) \033[1;36mOPEN ACCOUNT\033[0m\n";
        cout << "2) \033[1;36mDEPOSIT MONEY\033[0m\n";
        cout << "3) \033[1;36mWITHDRAW MONEY\033[0m\n";
        cout << "4) \033[1;36mDISPLAY ACCOUNT\033[0m\n";
        cout << "5) \033[1;36mEXIT\033[0m\n";
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

