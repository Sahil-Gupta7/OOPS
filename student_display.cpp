#include<iostream>
using namespace std;
struct student //Declaring structure
{
    char name[50];
    int roll;
    float marks[5];
};
int main()
{
    student s;
    int i; //Variable Declaration
    cout<<" Enter Student's NAME : "; //Taking Input
    cin>>s.name;
    cout<<" Enter Student's ROLL NO. : ";
    cin>>s.roll;
    for(i=0;i<5;i++) //Loop to take 5 subjects marks as input
    { //Beginning of for loop
        cout<<" Enter Marks for Subject "<<i+1<<" : ";
        cin>>s.marks[i]; //Taking Marks as input
    } //Ending of for loop
    cout<<endl;
    for(i=0;i<100;i++)
    cout<<"*";
    cout<<endl;
    cout<<" DISPLAYING RESULT "<<endl<<endl;
    cout<<" Student's NAME is "<<s.name<<endl; //Printing Result
    cout<<" Student's ROLL NO. is "<<s.roll<<endl;
    for(i=0;i<5;i++)
    cout<<" MARKS for Subject "<<i+1<<" : "<<s.marks[i]<<endl;
    return 0;
} //Ending of main loop