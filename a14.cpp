#include <iostream>
using namespace std;
class employee
{
protected:
    char name[40];
    int empno;
    int salary;
    char designation[10];

public:
    void input()
    {
        cout << "\n Enter Employee NUMBER : ";
        cin >> empno;
        cout << " Enter Employee's NAME : ";
        cin >> name;
        cout << " Enter Employee's SALARY : ";
        cin >> salary;
        cout << " Enter Employee's DESIGNATION : ";
        cin >> designation;
    }
    void show()
    {
        cout << "\n\t EMPLOYEE'S DETAIL : \n";
        cout << " Employee NUMBER : " << empno << endl;
        cout << " Employee's NAME : " << name << endl;
        cout << " Employee's SALARY : " << salary << endl;
        cout << " Employee's DESIGNATION : " << designation << endl;
    }
};
class manager : public employee
{
    static employee e;

public:
    void input()
    {
        employee::input();
    }
    void manager_input()
    {
        e.input();
    }
    void manager_output()
    {
        e.show();
    }
};
employee manager::e;
int main()
{
    int n;
    cout << " How many Employees Data you want to take INPUT : ";
    cin >> n;
    manager m[n];
    cout << " Enter Details for One Manager and " << n << " Employees : " << endl;
    m[0].manager_input();
    for (int i = 0; i < n; i++)
    {
        m[i].input();
    }
    m[0].manager_output();
    for (int i = 0; i < n; i++)
    {
        m[i].show();
    }
    return 0;
}