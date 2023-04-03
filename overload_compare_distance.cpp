#include <iostream>
using namespace std;
class dist
{
    int km;

public:
    dist()
    {
        km = 0;
    }
    void get()
    {
        cout << " Enter Distance in KM : ";
        cin >> km;
    }
    void show()
    {
        cout << " Distance is : " << km << " km" << endl;
    }
    dist operator>(dist d)
    {
        if (d.km > km)
        {
            return d;
        }
        else
            return *this;
    }
    void operator==(dist z)
    {
        if (km == z.km)
        {
            cout << "\tEQUAL" << endl;
        }
        else
        {
            cout << "\tNOT EQUAL\n";
        }
    }
};
int main()
{
    dist a, b, c;
    a.get();
    b.get();
    c = a > b;
    c.show();
    a == b;
    return 0;
}