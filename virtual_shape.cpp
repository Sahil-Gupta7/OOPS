#include <iostream>
using namespace std;
class shape
{
public:
    float r, l, b, h, ar;
    shape()
    {
        r = l = b = h = ar = 0;
    }
    virtual void area()
    {
        cout << "\t AREA of CIRCLE : " << ar << endl;
        cout << "\t AREA of SQUARE : " << ar << endl;
        cout << "\t AREA of TRIANGLE : " << ar << endl;
    }
};
class circle : public shape
{
public:
    void getr()
    {
        cout << " Enter RADIUS : ";
        cin >> r;
    }
    void area()
    {
        ar = 3.14 * r * r;
        cout << "\t AREA of CIRCLE : " << ar << " sq. unit" << endl;
    }
};
class square : public shape
{
public:
    void getl()
    {
        cout << "\n Enter SIDE : ";
        cin >> l;
    }
    void area()
    {
        ar = l * l;
        cout << "\t AREA of SQUARE : " << ar << " sq. unit" << endl;
    }
};
class triangle : public shape
{
public:
    void getbh()
    {
        cout << "\n Enter BASE of TRIANGLE : ";
        cin >> b;
        cout << " Enter HEIGHT of TRIANGLE : ";
        cin >> h;
    }
    void area()
    {
        ar = 0.5 * b * h;
        cout << "\t AREA of TRIANGLE : " << ar << " sq. unit" << endl;
    }
};
int main()
{
    shape *x;
    circle c;
    triangle t;
    square s;
    x = &c;
    c.getr();
    x->area();
    t.getbh();
    x = &t;
    x->area();
    x = &s;
    s.getl();
    x->area();
    return 0;
}