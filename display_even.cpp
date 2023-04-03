//Program to Display only Even Numbers between 1 to 150 
#include<iostream>
using namespace std;
class even //Creating Class
{
    int i;
    public:
    void print() //Member Function to Print Even Numbers
    {
        for(i=1;i<=150;i++) 
        { //for loop to count 1 to 150
            if(i%2==0) cout<<i<<"\t"; //if condition to Check for Even Numbers and then Print them
        }
    }
};
//Driver Code
int main()
{
    even ev; //Object Creation
    ev.print();
}