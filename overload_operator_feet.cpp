#include <iostream>
using namespace std;
class dist
{
    int foot, inches;

public:
    dist()
    {
        foot = 0;
        inches = 0;
    }
    void get()
    {
        cout << " Enter Distance in FOOT and INCHES : ";
        cin >> foot >> inches;
    }
    void show()
    {
        cout << foot << " Foot and " << inches << " Inches" << endl;
    }
    dist operator+(dist d)
    {
        dist x;
        x.foot = foot + d.foot;
        x.inches = inches + d.inches;
        while (x.inches >= 12)
        {
            x.inches = x.inches - 12;
            x.foot++;
        }
        return x;
    }
    void operator-()
    {
        foot = -foot;
        inches = -inches;
    }
    friend dist operator+(int, dist);
};
dist operator+(int y, dist d)
{
    dist x;
    x.foot = d.foot;
    x.inches = y + d.inches;
    while (x.inches >= 12)
    {
        x.inches = x.inches - 12;
        x.foot++;
    }
    return x;
}
int main()
{
    dist a, b, c, d;
    a.get();
    a.show();
    b.get();
    b.show();
    c = a + b;
    d = 4 + a;
    -b;
    c.show();
    d.show();
    b.show();
    return 0;
}