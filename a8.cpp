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
    saving(int m)
    {
        min_bal = m;
        input();
    }
    void deposit()
    {
        int d;
        cout << " Enter the Amount you would like to DEPOSIT : Rs.";
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
            cout << " MINIMUM Rs. 2000 should be left in Account...";
            cout << " Only Rs. " << balance - min_bal << " can be WITHDRAWN... " << endl;
            char ch;
            cout << " Confirm your Transaction (Y/N) : ";
            cin >> ch;
            if (ch == 'Y' || ch == 'y')
            {
                cout << "\t AMOUNT WITHDRAWN..." << endl;
                balance = min_bal;
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
        cout << " CURRENT BALANCE : Rs. " << balance << endl;
    }
};
class current : protected bank
{
    int overdue;

public:
    current(int n)
    {
        overdue = n;
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
            cout << " OVERDUE Amount : Rs. " << overdue << endl;
            cout << " SORRY!!! You can't Withdraw... PLEASE Clear your Dues first..." << endl;
        }
        else
        {
            if (balance - d > 0)
            {
                balance -= d;
            }
            else
            {
                cout << " Only Rs. " << balance << " can be WITHDRAWN..." << endl;
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
        cout << " CURRENT BALANCE : " << balance << endl;
    }
};
int main()
{
    int x;
    cout << "\n\t FOR SAVING ACCOUNT : \n";
    cout << " Enter the MINIMUM Balance for SAVING ACCOUNT : Rs. ";
    cin >> x;
    saving s(x);
    s.deposit();
    s.withdraw();
    s.showbal();
    cout << "\n\t FOR CURRENT ACCOUNT : \n";
    cout << " Enter the OVERDUE Balance in your CURRENT ACCOUNT : Rs. ";
    cin >> x;
    current c(x);
    c.deposit();
    c.withdraw();
    c.showbal();
    return 0;
}