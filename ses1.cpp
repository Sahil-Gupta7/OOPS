#include <iostream>
using namespace std;
class parcel_04
{
    int weight_04;

protected:
    int shippingcost_04;

public:
    parcel_04(int w)
    {
        weight_04 = w;
        shippingcost_04= 0;
    }
    void cal_shipping_04()
    {
        shippingcost_04 = 10 * weight_04;
    }
};
class box_04 : public parcel_04
{
    int no_of_boxes_04;

public:
    box_04(int x) : parcel_04(x)
    {
        if (x > 30)
            no_of_boxes_04 = 2;
        else if (x > 50)
            no_of_boxes_04 = 5;
        else
            no_of_boxes_04 = 1;
    }
    void cal_shipping_04()
    {
        parcel_04::cal_shipping_04();
        if (no_of_boxes_04 > 3)
        {
            shippingcost_04 += 30;
        }
    }
    void display()
    {
        cout << no_of_boxes_04 << " Boxes" << endl;
        cout << shippingcost_04 << " Rs shipping cost" << endl;
    }
};
int main()
{
    int x;
    cout << " Enter Weight : ";
    cin >> x;
    box_04 b(x);
    b.cal_shipping_04();
    b.display();
    return 0;
}