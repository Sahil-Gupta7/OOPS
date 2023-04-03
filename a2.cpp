#include <iostream>
using namespace std;
class employee
{
protected:
    int empid;
    char name[50];
    int salary;
};
class regular : protected employee
{
    int DA, HRA;

public:
    void input()
    {
        cout << " Enter Employee ID : ";
        cin >> empid;
        cout << " Enter Employee NAME : ";
        cin >> name;
        cout << " Enter Employee DA : ";
        cin >> DA;
        cout << " Enter Employee HRA : ";
        cin >> HRA;
        salary = HRA + DA;
    }
    void out()
    {
        cout << " BASIC SALARY of '" << name << "' with ID " << empid << " : Rs. " << salary << endl;
    }
};
class part_time : protected employee
{
    int hours, pay;

public:
    void input()
    {
        cout << "\n Enter Employee ID : ";
        cin >> empid;
        cout << " Enter Employee NAME : ";
        cin >> name;
        cout << " Enter No. of Hours : ";
        cin >> hours;
        cout << " Enter Pay per Hour : ";
        cin >> pay;
        salary = 30 * pay * hours;
    }
    void out()
    {
        cout << " BASIC SALARY of '" << name << "' with ID " << empid << " : Rs. " << salary << endl;
    }
};
int main()
{
    regular r;
    part_time p;
    r.input();
    r.out();
    p.input();
    p.out();
    return 0;
}