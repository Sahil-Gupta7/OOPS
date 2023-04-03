#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void dispa()
    {
        a = 10;
        cout << " Entered : " << a << endl;
    }
};
class A1
{
protected:
    int a1;

public:
    void dispa1()
    {
        a1 = 21;
        cout << " A1 Entered : " << a1 << endl;
    }
};

class B : public A
{
protected:
    int b;

public:
    void dispb()
    {
        b = 20;
        cout << " B Entered : " << b << endl;
    }
};
class C : public A
{
protected:
    int c;

public:
    void dispc()
    {
        c = 30;
        cout << " C Entered : " << c << endl;
    }
};

class D : public B
{
protected:
    int d;

public:
    void dispd()
    {
        d = 40;
        cout << " D Entered : " << d << endl;
    }
};

class E : public A, public A1
{
protected:
    int e;

public:
    void dispe()
    {
        e = 50;
        cout << " E Entered : " << e << endl;
    }
};

class F : public B
{
protected:
    int f;

public:
    void dispf()
    {
        f = 60;
        cout << " D Entered : " << f << endl;
    }
};

int main()
{
    B obb;
    C obc;
    D obd;
    E obe;
    F obf;
    cout << "\n\t SINGLE INHERITANCE : \n";
    obb.dispa();
    cout << "\n\t MULTILEVEL INHERITANCE : \n";
    obd.dispa();
    cout << "\n\t HYBRID INHERITANCE : \n";
    obd.dispa();
    obf.dispa();
    cout << "\n\t MULTIPLE INHERITANCE : \n";
    obe.dispa();
    obe.dispa1();
    cout << "\n\t HIERARCHICAL INHERITANCE : \n";
    obb.dispa();
    obc.dispa();
}