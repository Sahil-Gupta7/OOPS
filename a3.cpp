#include <iostream>
using namespace std;
class bank
{
protected:
    int accno;
    int balance;
    char name[40];

public:
    void input()
    {
        cout << " Enter Account Holder's NUMBER : ";
        cin >> accno;
        cout << " Enter Account Holder's NAME : ";
        cin >> name;
        cout << " Enter Account Holder's BALANCE : Rs. ";
        cin >> balance;
    }
};
class saving : protected bank
{
    int min_bal;

public:
    saving()
    {
        min_bal = 2000;
        cout << "\n\t FOR SAVING ACCOUNT : \n";
        input();
    }
    void deposit()
    {
        int d;
        cout << " Enter the Amount you would like to DEPOSIT : Rs. ";
        cin >> d;
        balance += d;
    }
    void withdraw()
    {
        int d;
        cout << " Enter the Amount you would like to WITHDRAW : Rs. ";
        cin >> d;
        if (balance - d < min_bal)
        {
            cout << " MINIMUM Rs. 2000 should be left in Account..." << endl;
            ;
            cout << " Only Rs. " << balance - d << " can be WITHDRAWN... " << endl;
            char ch;
            cout << " Confirm your Transaction (Y/N) : ";
            cin >> ch;
            if (ch == 'Y' || ch == 'y')
            {
                cout << "\t AMOUNT WITHDRAWN... " << endl;
                balance -= d;
            }
            else
            {
                cout << "\t REQUEST CANCELLED..." << endl;
            }
        }
        else
        {
            balance -= d;
            char ch;
            cout << " Confirm your Transaction (Y/N) : ";
            cin >> ch;
            if (ch == 'Y' || ch == 'y')
            {
                cout << "\t AMOUNT WITHDRAWN... " << endl;
            }
            else
            {
                cout << "\t REQUEST CANCELLED..." << endl;
            }
        }
    }
    void showbal()
    {
        cout << " Current Balance : Rs. " << balance << endl;
    }
};
class current : protected bank
{
    int overdue;

public:
    current()
    {
        overdue = 3000;
        cout << "\n\t FOR CURRENT ACCOUNT : \n";
        input();
    }
    void deposit()
    {
        int d;
        cout << " Enter the Amount you would like to DEPOSIT : Rs. ";
        cin >> d;
        if (overdue > d)
        {
            overdue -= d;
        }
        else
        {
            d -= overdue;
            overdue = 0;
            balance += d;
        }
    }
    void withdraw()
    {
        int d;
        cout << " Enter the Amount you would like to WITHDRAW : Rs. ";
        cin >> d;
        if (overdue != 0)
        {
            cout << " OVERDUE Amount : Rs. 3000" << endl;
            cout << " SOORRY!!! You can't Withdraw... PLEASE Clear your Dues first..." << endl;
        }
        else
        {
            if (balance - d > 0)
            {
                balance -= d;
            }
            else
            {
                cout << " Only Rs. " << balance << " can be Withdrawn..." << endl;
            }
            char ch;
            cout << " Confirm your Transaction (Y/N) : ";
            cin >> ch;
            if (ch == 'Y' || ch == 'y')
            {
                cout << "\t AMOUNT WITHDRAWN..." << endl;
            }
            else
            {
                cout << "\t REQUEST CANCELLED..." << endl;
            }
        }
    }
    void showbal()
    {
        cout << " Current Balance : Rs. " << balance << endl;
    }
};
int main()
{
    saving s;
    s.deposit();
    s.withdraw();
    s.showbal();
    current c;
    c.deposit();
    c.withdraw();
    c.showbal();
    return 0;
}