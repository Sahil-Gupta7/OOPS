#include <iostream>
using namespace std;
class shape
{
protected:
    double r;

public:
    double circle()
    {
        return 3.14 * r * r;
    }
};
class area : public shape
{
    double l;

public:
    void input()
    {
        cout << " Enter RADIUS : ";
        cin >> r;
        cout << " Enter LENGTH : ";
        cin >> l;
    }
    double cone()
    {
        return circle() + (3.14 * r * l);
    }
};
int main()
{
    area a;
    a.input();
    cout << "\n\t AREA of CIRCLE : " << a.circle() << " sq. unit" << endl;
    cout << "\t AREA of CONE : " << a.cone() << " sq. unit" << endl;
    return 0;
}