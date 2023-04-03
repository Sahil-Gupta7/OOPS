#include <iostream>
using namespace std;
class complex
{
    int real;
    int imaginary;
    public:
        void input()
        {
            cout << "Enter Real no.:";
            cin >> real;
            cout << "Enter Imaginary no. :";
            cin >> imaginary;
        }
        void output()
        {
            cout << real << "+" << "i" << imaginary << endl;
        }
        friend complex add(complex, complex);
};
complex add(complex a, complex b)
{
    complex c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;
    return c;
}
int main()
{
    complex x, y, z;
    x.input();
    y.input();
    z = add(x, y);
    z.output();
    return 0;
}