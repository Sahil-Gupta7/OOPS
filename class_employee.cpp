//Program to find Gross Salary of n Employees
#include<iostream>
using namespace std;
class employee //Creating Class
{
    private:
        char name[50];
        int id,age;
        float basic,gross;
    public:
    void read_emp_details(int i) //Member Function to Read Employee's Details
    {
        cout<<"\n\t\tEnter EMPLOYEE "<<i<<" DETAILS : \n";
        cout<<" Enter Employee's ID : ";
        cin>>id; //Taking Input
        cout<<" Enter Employee's NAME : ";
        cin>>name;
        cout<<" Enter Employee's AGE : ";
        cin>>age;
        cout<<" Enter Employee's BASIC SALARY : ";
        cin>>basic;
    }
    float find_gross() //Member Function to find Gross Salary
    {
        float da,hra; //Variable Declaration
        da=0;
        hra=0;
        da=basic*0.8; 
        hra=basic*0.1;
        gross=basic+da+hra; //Finding Gross Salary
        return gross;
    }
    void display_emp_details(int i) //Member Function to Display Employee's Details
    {
        cout<<"\n\t"<<id<<"\t\t"<<name<<"\t\t"<<age<<"\t\t"<<basic<<"\t\t\t"<<gross; //Printing Statements
    }
};
int main()
{
    employee emp[100]; //Object Creation
    int n,i; //Variable Declaration
    cout<<"\n Enter No. of Employees : ";
    cin>>n; //Taking No. of employees as Input
    for(i=0;i<n;i++)  
    { 
        emp[i].read_emp_details(i+1);
    } 
    for(i=0;i<n;i++)  
    {
        emp[i].find_gross();
    } 
    cout<<"\n\t\tEMPLOYEE DETAILS are : \n";
    cout<<"\n\tID\t\tNAME\t\tAGE\t\tBASIC SALARY\t\tGROSS SALARY";
    for(i=0;i<n;i++)  
    { 
        emp[i].display_emp_details(i+1);
    } 
    cout<<endl;
    return 0;
} //Ending of main