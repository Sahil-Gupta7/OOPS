//Program to find out Factorial of a given Number using Class
#include<iostream>
using namespace std;
class factorial //Creating Class
{
    int n,n1,f=1;
    public:
        void input(); //Member Function to take a No. as Input
        void calc(); //Member Function to find Factorial
        void display(); //Member Function to Display Factorial
};
void factorial::input() //Member Function Definition outside Class
{
    cout<<"\n Enter a NO. : ";
    cin>>n; //Taking Input
}
void factorial::calc() //Member Function Definition outside Class
{
    n1=n; //Storing Value of n
    if(n==0 || n==1)  cout<<"\n FACTORIAL of NO. "<<n<<" is : 1";
    else
    {
        while(n>0)
        {
            f=f*n; //Finding Factorial
            n--;
        }
    }
}
void factorial::display() //Member Function Definition outside Class
{
    cout<<"\n FACTORIAL OF "<<n1<<" is : "<<f<<"\n"; //Printing Statement
}
int main()
{
    factorial f; //Object Creation
    f.input();
    f.calc();
    f.display();
    return 0;
}