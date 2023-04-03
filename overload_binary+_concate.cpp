#include <iostream>
#include <string.h>
using namespace std;
class str
{
    char *a;

public:
    str()
    {
        a = new char[50];
    }
    void get()
    {
        cout << "\t Enter String : ";
        cin >> a;
    }
    void show()
    {
        cout << " String is : " << a << endl;
    }
    str operator+(str z)
    {
        str s;
        strcpy(s.a, a);
        strcat(s.a, z.a);
        return s;
    }
};
int main()
{
    str x, y, z;
    x.get();
    x.show();
    y.get();
    y.show();
    z = x + y;
    z.show();
}