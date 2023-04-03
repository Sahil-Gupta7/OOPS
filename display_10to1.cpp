//Program to Display Numbers from 10 to 1
#include<iostream>
using namespace std;
class display //Creating Class
{
    int i;
    public:
    void print() //Member Function
    {
        for(i=10;i>=1;i--) //for loop to count 10 to 1 
        cout<<i<<"\t"; //Printing Statement
    }
};
//Driver Code
int main()
{
    display d;  //Object Creation
    d.print();
}