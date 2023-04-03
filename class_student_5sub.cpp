//Program to create a Class to store Name, Roll No. and marks of 5 Subjects for a Student as Input and then Display it
#include<iostream>
using namespace std;
class student //Creating Class
{
    char name[30];
    int marks[5];
    int roll;
    int total;
    float per;
    public:
        void getDetails(); //Member Function to take Student's Details as Input
        void putDetails(); //Member Function to Print Student's Details
};
void student::getDetails() //Member Function Definition outside Class
{
    int i; //Variable Declaration
    total=0;
    cout<<"\n Enter NAME : ";
    cin>>name; //Taking Input
    cout<<" Enter ROLL : ";
    cin>>roll;
    for(i=0;i<5;i++) 
    { //Loop to take Marks of 5 Subjects as Input
        cout<<" Enter MARKS for SUBJECT "<<i+1<<" : ";
        cin>>marks[i];
        total+=marks[i]; //Finding Total Marks
    }
    per=(float)total/500*100; //Finding Percentage
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