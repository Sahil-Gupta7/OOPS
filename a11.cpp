#include <iostream>
#include <string.h>
using namespace std;
class employee
{
protected:
    int empno;
    char name[40];
    char designation[10];
    char qualification[10];
};
class date : protected employee
{
    string dob;
    string doj;

public:
    void input()
    {
        fflush(stdin);
        cout << " Enter Employee NUMBER : ";
        cin >> empno;
        cout << " Enter Employee's NAME : ";
        cin >> name;
        cout << " Enter Employee's Date Of Birth (DOB) : ";
        cin >> dob;
        cout << " Enter Employee's DESIGNATION : ";
        cin >> designation;
        cout << " Enter Employee's QUALIFICATION : ";
        cin >> qualification;
        cout << " Enter Employee Date Of Joining (DOJ) : ";
        cin >> doj;
    }
    void output()
    {
        fflush(stdout);
        cout << "\n\t EMPLOYEE'S DETAIL :\n";
        cout << " Employye NUMBER : " << empno << endl;
        cout << " EMPLOYEE'S NAME : " << name << endl;
        cout << " EMPLOYEE'S DOB : " << dob << endl;
        cout << " EMPLOYEE'S DESIGNATION :" << designation << endl;
        cout << " EMPLOYEE'S QUALIFICATION : " << qualification << endl;
        cout << " EMPLOYEE'S DOJ : " << doj << endl;
    }
};
int main()
{
    date d;
    d.input();
    d.output();
    return 0;
}