#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << " Enter Numerator : ";
    cin >> a;
    cout << " Enter Denominator : ";
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        else
        {
            cout << " Divsion Result : " << (a / b);
        }
    }
    catch (int)
    {
        cout << " Denominator cannot be Zero...";
    }
    return 0;
}