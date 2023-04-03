//Program to find Fibonacci Series upto n using Class
#include<iostream>
using namespace std;  
class fibonacci //Creating Class
{  
    //Taking the integers as public
    public:
    int a,b,c;
    void generate(int); //Member Function find Fibonacci Series
};
void fibonacci::generate(int n) //Member Function Definition outside Class
{
    int i; //Variable Declaration
    a=0; //Variable to Store 0
    b=1; //Variable to Store 1
    cout<<"\n\t\t FIBONACCI SERIES : \n";
    cout<<a<<" , "<<b;
    //Using for loop for continuing the Fibonacci series
    for(i=1;i<n-1;i++) 
    { 
        c=a+b; //Addition of the previous Two Terms to get the Next Term
        cout<<" , "<<c; //Printing Statement
        a=b;
        b=c;
    }
}
//Driver code
int main()
{
    int n; //Variable Declaration 
    cout<<"\n Enter number of Fibonacci Series needed : ";
    cin>>n; //Taking No. as Input
    fibonacci fib; //Object Creation
    fib.generate(n);
    return 0;
}