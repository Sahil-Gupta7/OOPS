//Program to count number of objects created from a class using concept of static data members and static member function.
#include <iostream>
using namespace std;
class count
{
    int x;
    static int y;

public:
    count(int a = 10)
    {
        x = a;
        y++;
    }
    static int res()
    {
        return y;
    }
};
int count::y = 0;
int main()
{
    int n;
    cout << " Enter the No. of times you want to Call the Object : ";
    cin >> n;
    count c[n];
    for (int i = 0; i < n; i++)
        cout << "\t Interation " << i + 1 << " : " << c[i].res() << endl;
}