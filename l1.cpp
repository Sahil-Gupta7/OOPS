#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    A()
    {
        cout << " CONSTRUCTOR of Base Class A" << endl;
    }
    ~A()
    {
        cout << " DESTRUCTOR of Base Class A" << endl;
    }
};
class B
{
    protected:
    int b;
    public:
    B()
    {
        cout << " CONSTRUCTOR of Base Class B" << endl;
    }
    ~B()
    {
        cout << " DESTRUCTOR of Base Class B" << endl;
    }
};
class C
{
    protected:
    int c;
    public:
    C()
    {
        cout << " CONSTRUCTOR of Base Class C" << endl;
    }
    ~C()
    {
        cout << " DESTRUCTOR of Base Class C" << endl;
    }
};
class D:public A, public B, public C
{
    protected:
    int a;
    public:
    D()
    {
        cout << " CONSTRUCTOR of Base Class D" << endl;
    }
    ~D()
    {
        cout << " DESTRUCTOR of Base Class D" << endl;
    }
};
int main()
{
    D ob;
}