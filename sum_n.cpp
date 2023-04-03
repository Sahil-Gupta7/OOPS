//Program to Calculate Sum of Numbers between 1 to N
#include<iostream>
using namespace std;
class sum //Creating Class
{
    int i;
    public:
    void add(int); //Member Function to Find Sum of n Numbers 
};
void sum::add (int n) //Member Function Definition Outside Class
{
    int s=0; //Variable Declaration
    for(i=1;i<=n;i++) //for loop to count from 1 to n
        s=s+i; //Statementr to Add Numbers from 1 to n
    cout<<" SUM of No. (1 to "<<n<<") is "<<s; //Printing Statement
}
//Driver Code
int main()
{
    int n; //Variable Declaration
    cout<<" Enter the Value of n : ";
    cin>>n; //Taking the End Range as Input
    sum s; //Object Creation
    s.add(n);
}