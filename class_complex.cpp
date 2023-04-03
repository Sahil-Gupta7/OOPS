//Program to create a Class complex to store Real and Imaginary part of 10 Complex No. taken as Input
#include<iostream>
using namespace std;
#include<math.h>
class complex //Creating Class
{
    float real;
    float img;
    public : 
    void read(); //Member Function to Read Real and Imaginary part of Complex Number
    void display(); //Member Function to Display Real and Imaginary part of Complex Number
};
void complex::read() //Member Function Definition outside Class
{
    cout<<"\n Enter REAL part of the Number : ";
    cin>>real; //Taking Real and Imaginary part as Input
    cout<<" Enter IMAGINARY part of the Number : ";
    cin>>img;
}
void complex::display() //Member Function Definition outside Class
{
    if(img>=0)
    cout<<real<<" +"<<img<<"i"; //Printing Statements
    else
    cout<<real<<" "<<img<<"i";
}
int main()
{
    int n=10,i; //Variable Declaration
    complex c[n]; //Object Creation
    for(i=0;i<n;i++)
    { //for Loop to take 10 Complex No. as Input
        cout<<"\n Enter COMPLEX NO. "<<i+1<<" : ";
        c[i].read();
    }
    cout<<"\n\t\t COMPLEX NO. in order are : \n";
    for(int i=0;i<n;i++)
    { //for Loop for printing
        cout<<endl<<"c"<<i+1<<" : ";
        c[i].display();
    }
    return 0;
}