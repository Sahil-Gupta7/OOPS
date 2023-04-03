#include <iostream>
using namespace std;
class D
{
protected:
    int d;

public:
    D()
    {
        cout << " CONSTRUCTOR D called..." << endl;
    }
    ~D()
    {
        cout << " DESTRUCTOR D called..." << endl;
    }
};
class A : virtual protected D
{
protected:
    int a;

public:
    A()
    {
        cout << " CONSTRUCTOR A called..." << endl;
    }
    ~A()
    {
        cout << " DESTRUCTOR A called..." << endl;
    }
};
class B : virtual protected D
{
protected:
    int b;

public:
    B()
    {
        cout << " CONSTRUCTOR B called..." << endl;
    }
    ~B()
    {
        cout << " DESTRUCTOR B called..." << endl;
    }
};
class C : protected A, protected B
{
    int c;

public:
    C()
    {
        cout << " CONSTRUCTOR C called..." << endl;
    }
    ~C()
    {
        cout << " DESTRUCTOR C called..." << endl;
    }
};
int main()
{
    C ob;
    return 0;
}