#include <iostream> 
using namespace std; 
class temp
{
    int a[10];

public:
    friend istream &operator>>(istream &din, temp &t);
    friend ostream &operator<<(ostream &din, temp &t);
};
istream &operator>>(istream &din, temp &t)
{
    cout << " Enter 10 Integer Data : " << endl;
    for (int i = 0; i < 10; i++)
    {
        din >> t.a[i];
    }
    return din;
}
ostream &operator<<(ostream &dout, temp &t)
{
    cout << " Output : ";
    for (int i = 0; i < 10; i++)
    {
        dout << t.a[i] << "  ";
    }
    cout << endl;
    return dout;
}
int main()
{
    temp s;
    cin >> s;
    cout << s;
    return 0;
}