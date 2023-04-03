#include <iostream>
using namespace std;
class shape
{
protected:
    float area;
};
class circle : protected shape
{
    float radius;

public:
    void input()
    {
        cout << "\n Enter RADIUS of CIRCLE : ";
        cin >> radius;
    }
    void show_area()
    {
        area = 3.14 * radius * radius;
        cout << "\t AREA of CIRCLE : " << area << " sq. unit" << endl;
    }
};
class rectangle : protected shape
{
    float l, b;

public:
    void input()
    {
        cout << "\n Enter LENGTH of RECTANGLE : ";
        cin >> l;
        cout << " Enter BREADTH of RECTANGLE : ";
        cin >> b;
    }
    void show_area()
    {
        area = l * b;
        cout << "\t AREA of RECTANGLE : " << area << " sq. unit" << endl;
    }
};
class traingle : protected shape
{
    float b, h;

public:
    void input()
    {
        cout << "\n Enter BASE of TRIANGLE : ";
        cin >> b;
        cout << " Enter HEIGHT of TRIANGLE : ";
        cin >> h;
    }
    void show_area()
    {
        area = 0.5 * b * h;
        cout << "\t AREA of TRIANGLE : " << area << " sq. unit" << endl;
    }
};
int main()
{
    circle c;
    rectangle r;
    traingle t;
    c.input();
    c.show_area();
    r.input();
    r.show_area();
    t.input();
    t.show_area();
    return 0;
}