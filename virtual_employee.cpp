#include <iostream>
using namespace std;
class employee
{
protected:
    int empid;
    char name[50];
    int salary;

public:
    employee()
    {
        empid = salary = 0;
    }
    virtual void sal()
    {
        cout << "\t SALARY : " << salary << endl;
    }
};
class regular : public employee
{
    int DA, HRA;

public:
    void input()
    {
        cout << " Enter Employee's ID : ";
        cin >> empid;
        cout << " Enter Employee's NAME : ";
        cin >> name;
        cout << " Enter Employee's DA : ";
        cin >> DA;
        cout << " Enter Employee's HRA : ";
        cin >> HRA;
        salary = HRA + DA;
    }
    void sal()
    {
        cout << "\t BASIC SALARY of '" << name << "' with ID " << empid << " is : " << salary << endl;
    }
};
class part_time : public employee
{
    int hours, pay;

public:
    void input()
    {
        cout << "\n Enter Employee's ID : ";
        cin >> empid;
        cout << " Enter Employee's NAME : ";
        cin >> name;
        cout << " Enter Employee's NO. OF HOURS : ";
        cin >> hours;
        cout << " Enter Employee's PAY PER HOUR : ";
        cin >> pay;
        salary = 30 * pay * hours;
    }
    void sal()
    {
        cout << "\t BASIC SALARY of '" << name << "' with ID " << empid << " is : " << salary << endl;
    }
};
int main()
{
    employee *s;
    regular r;
    part_time p;
    r.input();
    s = &r;
    s->sal();
    p.input();
    s = &p;
    s->sal();
    return 0;
}