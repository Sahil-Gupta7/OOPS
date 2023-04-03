//Program to create a Class to store Name, Roll No. and total marks for a Student as Input and then Display it
#include<iostream>
using namespace std;
class student //Creating Class
{
    private:
        char name[30];
        int roll;
        int total;
        float per;
    public:
        void getDetails(); //Member Function to take Student's Details as Input
        void putDetails(); //Member Function to Print Student's Details 
};
void student::getDetails() //Member Function Definition outside Class
{
    cout<<"\n Enter NAME : ";
    cin>>name; //Taking Input
    cout<<" Enter ROLL : ";
    cin>>roll;
    cout<<" Enter TOTAL MARKS out of 500 : ";
    cin>>total;
    per=(float)total/500*100; //Finding Percentage for a Student
}
void student::putDetails() //Member Function Definition outside Class
{
    cout<<"\n\t\t STUDENT DETAILS : "<<endl;
    //Printing Statements
    cout<<" NAME : "<<name<<endl<<" ROLL NO. : "<<roll<<endl<<" TOTAL MARKS : "<<total<<endl<<" PERCENTAGE : "<<per<<"%";
}
int main()
{
    student std; //Object Creation
    std.getDetails();
    std.putDetails();
    return 0;    
}