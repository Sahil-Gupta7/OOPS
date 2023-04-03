#include <iostream>
#include <conio.h>
using namespace std;
class emp
{
public:
    int eno;
    char name[20], des[20];

    void get()
    {
        cout << endl;
        cout << " Enter the Employee NUMBER : ";
        cin >> eno;
        cout << " Enter the Employee Name : ";
        cin >> name;
        cout << " Enter the DESIGNATION : ";
        cin >> des;
    }
};

class salary : public emp
{
    float bp, hra, da, pf, np;

public:
    void get1()
    {
        cout << " Enter the BASIC PAY : ";
        cin >> bp;
        cout << " Enter the Humen Resource Allowance : ";
        cin >> hra;
        cout << " Enter the Dearness Allowance : ";
        cin >> da;
        cout << " Enter the Profitablity Fund : ";
        cin >> pf;
    }

    void calculate()
    {
        np = bp + hra + da - pf;
    }

    void display()
    {
        cout << eno << "\t\t" << name << "\t" << des << "\t" << bp << "\t" << hra << "\t" << da << "\t" << pf << "\t" << np << "\n";
    }
};

int main()
{
    int i, n;
    char ch;
    salary s[10];
    cout << "\t Enter the NUMBER of EMPLOYEES : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        s[i].get();
        s[i].get1();
        s[i].calculate();
    }
    cout << "\nEmp_No. \t Emp_Name\t Des \t BP \t HRA \t DA \t PF \t NP \n";
    for (i = 0; i < n; i++)
        s[i].display();
    getch();
}