#include <iostream>
using namespace std;
int main()
{
    int x = 7, y = 0, z;
    try
    {
        //When x is divided by 0
        if (y == 0)
            throw(z);
        else
            z = x / y;
    }
    catch (char c) //catch block to handle/catch exception
    {
        cout << " Caught exception : char type";
    }
    catch (int i) //catch block to handle/catch exception
    {
        cout << " Caught exception : int type";
    }
    catch (short s) //catch block to handle/catch exception
    {
        cout << " Caught exception : short type";
    }
    cout << "\n HELLO!!!";
}