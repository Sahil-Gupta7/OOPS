//Program to take Complex No. as Input, include all type of Constructors and Destructor and Display it
#include <iostream>
using namespace std;
class complex //Creating Class
{
    int real;
    int imaginary;
    int *p = new int;
    int *q = new int;

public:
    complex() //Default Constructor
    {
        real = 7;
        imaginary = 27;
        cout << "\n\t\t DEFAULT CONSTRUCTOR : \n";
        cout << "\t Complex Number : " << real << " + " << imaginary << "i" << endl;
    }
    complex(int x, int y) //Parameterized Constructor
    {
        cout << "\n\t\t PARAMETERIZED CONSTRUCTOR : \n";
        real = x;
        imaginary = y;
        cout << "\t Complex Number : " << x << " + " << y << "i" << endl;
    }
    complex(const complex &c) //Copy Constructor
    {
        real = c.real;
        imaginary = c.imaginary;
        cout << "\n\t\t COPY CONSTRUCTOR : \n";
        cout << "\t Complex Number : " << real << " + " << imaginary << "i" << endl;
    }
    complex(int *a, int *b) //Dynamic Constructor
    {
        *p = *a;
        *q = *b;
        cout << "\n\t\t DYNAMIC CONSTRUCTOR : \n";
        cout << "\t Complex Number : " << *p << " + " << *q << "i" << endl
             << endl;
    }
    ~complex() //Destructor
    {
        cout << " DESTRUCTOR Invoked... \n";
        delete p;
        delete q;
    }
};
//Driver Code
int main()
{
    int real, imaginary; //Variable Declaration
    cout << " Enter REAL part : ";
    cin >> real; //Taking Real part of Complex No. as Input
    cout << " Enter IMAGINARY part : ";
    cin >> imaginary; //Taking Imaginary part of Complex No. as Input
    complex a;
    complex b(real, imaginary);
    complex c = b;
    complex d(&real, &imaginary);
    return 0;
}