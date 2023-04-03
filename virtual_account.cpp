#include <iostream>
using namespace std;
class bank
{
public:
    int accno;
    int balance;
    char name[40];
    bank()
    {
        accno = balance = 0;
    }
    void input()
    {
        cout << " Enter Account NUMBER : ";
        cin >> accno;
        cout << " Enter Account Holder's NAME : ";
        cin >> name;
        cout << " Enter Account BALANCE : ";
        cin >> balance;
    }
    virtual void showbal()
    {
        cout << "\t CURRENT BALANCE : " << balance << endl;
    }
};
class saving : public bank
{
    int min_bal;

public:
    saving()
    {
        min_bal = 5000;
        input();
    }
    void deposit()
    {
        int d;
        cout << " Enter the AMOUNT you would like to DEPOSIT : ";
        cin >> d;
        balance += d;
    }
    void withdraw()
    {
        int d;
        cout << " Enter the AMOUNT you would like to WITHDRAW : ";
        cin >> d;
        if (balance - d < min_bal)
        {
            cout << "\t Sorry!!! Only " << balance - d << " can be Withdrawn " << endl;
            char ch;
            cout << " Confirm your Transaction (Y/N) : ";
            cin >> ch;
            if (ch == 'Y')
            {
                cout << "\t AMOUNT WITHDRAWN... " << endl;
                balance -= d;
            }
            else
            {
                cout << "\t REQUEST CANCELLED... " << endl;
            }
        }
        else
        {
            balance -= d;
        }
    }
    void showbal()
    {
        cout << " CURRENT BALANCE : " << balance << endl;
    }
};
class current : public bank
{
    int overdue;

public:
    current()
    {
        overdue = 5000;
        input();
    }
    void deposit()
    {
        int d;
        cout << " Enter the AMOUNT you would like to DEPOSIT : ";
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
        cout << " Enter the AMOUNT you would like to WITHDRAWN : ";
        cin >> d;
        if (overdue != 0)
        {
            cout << "\t Sorry!!! You can't withdraw... Please clear your dues first " << endl;
        }
        else
        {
            if (balance - d > 0)
            {
                balance -= d;
            }
            else
            {
                cout << "\t Only " << balance << " can be Withdrawn " << endl;
            }
            char ch;
            cout << "\t Confirm your Transaction (Y/N) : ";
            cin >> ch;
            if (ch == 'Y')
            {
                cout << "\t AMOUNT WITHDRAWN... " << endl;
            }
            else
            {
                cout << "\t REQUEST CANCELLED... " << endl;
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
    bank *b;
    saving s;
    s.deposit();
    s.withdraw();
    b = &s;
    b->showbal();
    current c;
    c.deposit();
    c.withdraw();
    b = &c;
    b->showbal();
    return 0;
}