#include <iostream>
using namespace std;
class n
{
    int a;

public:
    void input()
    {
        cout << " Enter a Number : ";
        cin >> a;
    }
    void operator--()
    {
        if (a <= 0)
        {
            throw a;
        }
        --a;
    }
    void show()
    {
        cout << "\t Number -> " << a << endl;
    }
};
int main()
{
    n ob;
    ob.input();
    ob.show();
    try
    {
        --ob;
    }
    catch (int a)
    {
        cout << " Exception caught... Number is less than '0'\n";
    }
    ob.show();
}