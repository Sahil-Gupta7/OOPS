//Program to Increment the Value of an argument given to Function
#include <iostream>
using namespace std;
class arg //Creating Class
{
    public:
        void incr(int x)
        {
            cout << " INCREMENTED VALUE : " << x+1; //Printing the Incremented Value
        }
};
//Driver Code
int main()
{ //Starting of Main Function
    arg a; //Object Creation
    int y; //Variable Declaration
    cout << " Enter a Number : ";
    cin >> y; //Taking Number as Input
    a.incr(y);
} //Ending of Main Function