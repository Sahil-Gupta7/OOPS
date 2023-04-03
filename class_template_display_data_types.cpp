#include <iostream>
using namespace std;
template <class T>
class data
{
    T a;

public:
    data()
    {
        cin >> a;
    }
    void show()
    {
        cout << "\t Value is " << a << endl;
    }
};
int main()
{
    cout << " Enter INTEGER Value : ";
    data<int> x;
    x.show();
    cout << " Enter FLOAT Value : ";
    data<float> y;
    y.show();
    cout << " Enter CHAR Value : ";
    data<char> z;
    z.show();
    return 0;
}