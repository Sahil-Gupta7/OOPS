#include <iostream>
using namespace std;
class T
{
    int hr, min;

public:
    T()
    {
        hr = 0;
        min = 0;
    }
    void get()
    {
        cout << " Enter HOURS and MINUTES : ";
        cin >> hr >> min;
    }
    void show()
    {
        cout << " Time is : " << hr << " hrs and " << min << " min " << endl;
    }
    void operator==(T z)
    {
        if ((hr == z.hr) && (min == z.min))
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
    T a, b;
    a.get();
    b.get();
    a == b;
    return 0;
}