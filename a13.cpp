#include <iostream>
using namespace std;
class Distance
{
protected:
    float kms, m;
};
class school : protected Distance
{
public:
    void input()
    {
        cout << " Enter the DISTANCE from HOME to SCHOOL in kms : ";
        cin >> kms;
        int meter = kms * 1000;
        int k = meter / 1000;
        m = meter - k * 1000;
        kms = k;
    }
    void show()
    {
        cout << " DISTANCE from HOME to SCHOOL : " << kms << " km and " << m << " meter\n";
    }
};
class office : protected Distance
{
public:
    void input()
    {
        cout << " Enter the DISTANCE from HOME to OFFICE in kms : ";
        cin >> kms;
        int meter = kms * 1000;
        int k = meter / 1000;
        m = meter - k * 1000;
        kms = k;
    }
    void show()
    {
        cout << " DISTANCE from HOME to OFFICE : " << kms << " km and " << m << " meter\n";
    }
};
int main()
{
    office o;
    school s;
    s.input();
    s.show();
    o.input();
    o.show();
    return 0;
}