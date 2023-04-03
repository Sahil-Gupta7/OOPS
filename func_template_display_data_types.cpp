#include <iostream>
using namespace std;
template <class a, class b>
void display(a x, b y)
{
    cout << x << "  &  " << y << endl;
}
int main()
{
    int x = 7;
    float y = 7.77;
    char z = 83;
    cout << " Integer & Float : ";
    display(x, y);
    cout << " Float & Character : ";
    display(y, z);
    cout << " Character & Integer: ";
    display(z, x);
}