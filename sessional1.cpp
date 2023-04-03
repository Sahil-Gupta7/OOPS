#include <iostream>
class parcel04
{
    float weight04;

protected:
    float shipping_cost04;

public:
    parcel04()
    {
        weight04 = 1;
        shipping_cost04 = 10;
    }
    int cal_shipping04()
    {
        shipping_cost04 = weight04 * 10;
        return shipping_cost04;
    }
};
class Box04 : public parcel04
{
    int no_of_boxes04;

public:
    Box04()
    {
        if (weight04 < 30)
            no_of_boxes04 = 1;
        if (weight04 > 30 && weight04 < 50)
            no_of_boxes04 = 2;
        if (weight04 > 50)
            no_of_boxes04 = 5;
    }
};