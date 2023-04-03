#include<iostream>
using namespace std;
struct employee //Declaring structure
{
    char name[50];
    int id,age;
    double salary;
};
int main()
{
    employee emp[100],*ptr;
    int n,i; //Variable Declaration
    double hra,da,gross;
    cout<<" Enter No. of Employees : ";
    cin>>n; //Taking No. of employees as Input
    ptr=&emp[n];
    cout<<" Enter Employee's Detail.. "<<endl;
    for(i=0;i<n;i++) //Loop to take details of n no. of employees as input 
    { //Beginning of for loop
        cout<<endl;
        cout<<" Enter Employee's ID : ";
        cin>>emp[i].id; //Taking Input
        cout<<" Enter Employee's NAME : ";
        cin>>emp[i].name;
        cout<<" Enter Employee's AGE : ";
        cin>>emp[i].age;
        cout<<" Enter Employee's SALARY : ";
        cin>>emp[i].salary;
    } //Ending of for loop
    cout<<endl<<endl;
    for(i=0;i<100;i++)
    cout<<"*";
    cout<<endl;
    cout<<" Displaying Details.. "<<endl;
    cout<<" ID \t NAME \t AGE \t SALARY \t GROSS SALARY"<<endl; //Printing Output
    for(i=0;i<n;i++) 
    { //Beginning of for loop
        gross=0;
        da=0;
        hra=0;
        da=0.8*emp[i].salary; //Finding Gross Salary
        hra=0.1*emp[i].salary;
        gross=emp[i].salary+da+hra;
        cout<<emp[i].id<<" \t "<<emp[i].name<<"\t "<<emp[i].age<<" \t "<<emp[i].salary<<"\t "<<gross<<endl;
    } //Ending of for loop
    return 0;
} //Ending of main