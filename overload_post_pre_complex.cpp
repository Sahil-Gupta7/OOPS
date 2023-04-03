#include <iostream>
using namespace std;
class complex
{
    int imaginary, real;

public:
    void get()
    {
        cout << " Enter REAL and IMAGINARY Part : ";
        cin >> real >> imaginary;
    }
    void show()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
    complex operator+(complex d)
    {
        complex x;
        x.real = real + d.real;
        x.imaginary = imaginary + d.imaginary;
        return x;
    }
    void operator++()
    {
        real++;
        imaginary++;
    }
};
int main()
{
    complex a, b, c;
    a.get();
    a.show();
    b.get();
    b.show();
    c = a + b;
    cout << "\tAfter ADDITION : ";
    c.show();
    ++a;
    cout << "\tAfter ++ OVERLOADING : ";
    a.show();
    return 0;
}