#include <iostream>
using namespace std;
int main()
{
    int x = 7, y = 0, z;
    try
    {
        //If x is divided by y
        if (y == 0)
            throw(z);
        else
            z = x / y;
    }
    catch (...) //catch block to handle/catch exception
    {
        cout << " A catch block for all type of exceptions has caught an exception";
    }
}