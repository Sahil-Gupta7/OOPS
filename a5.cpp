#include <iostream>
using namespace std;
class A
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
class B : protected A
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
class C : protected B
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