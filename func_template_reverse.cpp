#include <iostream>
using namespace std;
template <class T>
void rev(T a)
{
    T rev = 0;
    while (a)
    {
        int l;
        l = a % 10;
        rev = rev * 10 + l;
        a = a / 10;
    }
    cout << " Reverse is : " << rev << endl;
}
int main()
{
    int a;
    cout << " Enter INETGER Value : ";
    cin >> a;
    rev(a);
    return 0;
}