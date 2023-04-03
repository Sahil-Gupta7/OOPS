#include<iostream>
using namespace std;
struct studinfo //Declaring Structure
{
    int roll;
    char name[50];
    double marks[5];
    double total,percentage;
};
// Function Prototypes
void calc(struct studinfo s[],int i);
void displayAll(struct studinfo s[],int n);
void displayRn(struct studinfo s[],int rn,int n);
void findrn(struct studinfo s[],int rn,int n);
void findPercentageInRange(struct studinfo s[],int n,int lb,int ub);
void sort(struct studinfo s[],int n);
// Utility Functions
void displayAll(struct studinfo s[],int n);
void draw();
int main() //main Function
{
    int n,i,j; //Variable Declaration
    cout<<" Enter the number of entries : ";
    cin>>n; //Taking No. of Students whose details are to be found
    struct studinfo s1[n];
    for(i=0;i<n;i++) //Loop to take input of n number of students 
    { //Beginning of for loop
        cout<<endl;
        cout<<" Enter Details of Student "<<i+1<<endl;
        cout<<" Enter ROLL NUMBER : ";
        cin>>s1[i].roll; //Taking Input
        cout<<" Enter NAME : ";
        cin>>s1[i].name;
        for(j=0;j<5;j++) //Loop to take marks for 5 subject as Input
        { //Beginning of loop
            cout<<" Enter Marks for Subject "<<j+1<<" : ";
            cin>>s1[i].marks[j];
        } //End of loop
        //Calculation Query
        calc(s1,i); //Calling the Function to calculate total and percentage 
    } //End of for loop
    draw(); //Calling the Function 
    displayAll(s1,n); //Calling the Function
    //Roll No. Query
    int trn;
    cout<<" Enter ROLL NUMBER of the Student whose details are to be Found : ";
    cin>>trn;
    findrn(s1,trn,n); //Calling the Function to find details of Student by taking Roll No. as Input
    draw();
    //Range Query
    int lb,ub;
    cout<<" Enter the LOWER Bound RANGE : ";
    cin>>lb;
    cout<<" Enter the UPPER Bound RANGE : ";
    cin>>ub;
    findPercentageInRange(s1,n,lb,ub); //Calling the Function to find details of Student with Percentage in given Range
    draw();
    //Sorting Query
    sort(s1,n); //Calling the Function to Sort Student's list in Ascending Order
    cout<<" SORTED LIST of STUDENTS is :- ";
    displayAll(s1,n); //Calling the Function
    return 0;
} //Ending of main Function
//Function Definition
void calc(struct studinfo s[],int i)
{ //Beginning of calc function
    int j; ///Varable Declaration
    s[i].total=0;
    for(j=0;j<5;j++)
        s[i].total+=s[i].marks[j]; //Finding Total marks for Student
    s[i].percentage=s[i].total/5; //Finding Percentage for Student
} //Ending of calc function
void findrn(struct studinfo s[],int rn,int n)
{ //Beginning of findrn function
    int i,flag=0; //Variable Declaration
    for(i=0;i<n;i++)
    { //Beginning of for loop
        if(s[i].roll == rn) //Statement to search the Roll No. taken as input 
        { //Beginning of if loop
        //Printing Statements if conditions are True
            flag++;
            cout<<"\n DETAILS of Student are : \n\tROLL NUMBER : "<<s[i].roll<<"\n\tNAME : "<<s[i].name;
            for(int j=0;j<5;j++)
                cout<<"\n\t MARKS of Subject "<<j+1<<" : "<<s[i].marks[j];
            cout<<"\n TOTAL MARKS = "<<s[i].total<<"\n PERCENTAGE = "<<s[i].percentage<<"%"<<endl;
        } //Ending of if loop
    } //Ending of for loop
    if(flag==0) cout<<"\n\t NO Student is there with given ROLL NO."; //else condition if the match is not found
} //Ending of findrn Function
void findPercentageInRange(struct studinfo s[],int n,int lb,int ub)
{ //Beginning of findPercentageInRange Function
    int i,j,flag=0;
    for(i=0;i<n;i++)
    { //Beginning of for loop
        if(s[i].percentage>=lb && s[i].percentage<=ub) //if Statement to search for Percentage in given Range
        { //Beginning of if statement
        //Printing Statements if Condition are True
            flag++;
            cout<<"\n DETAILS of Student are : \n\tROLL NUMBER : "<<s[i].roll<<"\n\tNAME : "<<s[i].name;
            for(j=0;j<5;j++)
            cout<<"\n\t MARKS of Subject "<<j+1<<" : "<<s[i].marks[j];
            cout<<"\n TOTAL MARKS = "<<s[i].total<<"\n PERCENTAGE = "<<s[i].percentage<<"%";
            cout<<endl;
        } //Ending of if loop
    } //Ending of for loop
    if(flag==0) cout<<"\n\t NO STUDENT is there in given Range"<<endl; //else Statement if conditions are not satisfied
} //Ending of findPercentageInRange Function
void sort(struct studinfo s[],int n)
{ //Beginning of sort Function
    int i,j; //Variable Declaration
    struct studinfo temp;
    for(i=0;i<n-1;i++)
    { //Beginning of for loop
        for(j=0;j<(n-1-i);j++)
        {
            if(s[j].percentage > s[j+1].percentage) //if Statement to sort
            { //Beginning of if loop
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            } //Ending of if loop
        }
    } //Ending of for loop
} //Ending of sort Function
void draw()
{ //Beginning of draw Function
    int i; //Variable Declaration
    cout<<endl;
    for(i=0;i<100;i++)
        cout<<"*"; //Printing * line to differentiate Steps
    cout<<endl;
}
void displayAll(struct studinfo s[],int n)
{ //Beginning of diplayAll Function
    int i,j; //Variable Declaration
    for(i=0;i<n;i++)
    { //Beginning of for loop
        cout<<"\n DETAILS of Student are :\n\tROLL NUMBER : "<<s[i].roll<<"\n\tNAME : "<<s[i].name;
        //Printing Statements
        for(j=0;j<5;j++)
        cout<<"\n\tMARKS of Subject "<<j+1<<" : "<<s[i].marks[j];
        cout<<"\n TOTAL MARKS = "<<s[i].total<<"\n PERCENTAGE = "<<s[i].percentage<<"%";
    } //Ending of for loop
    draw();
} //Ending of displayAll Function