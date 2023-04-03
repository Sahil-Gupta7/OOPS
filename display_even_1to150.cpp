//Program to Display only Even Numbers between 1 to 150 
#include<iostream>
using namespace std;
class even //Creating Class
{
    int i;
    public:
    void print() //Member Function to Print Even Numbers
    {
        for(i=2;i<=150;i+=2) //for loop to count Even Numbers only
            cout<<i<<"\t"; //Printing Statement
    }
};
//Driver Code
int main()
{
    even ev; //Object Creation
    ev.print();
}