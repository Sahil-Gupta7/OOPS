//Program to Find Area of Triangle using Default and Actual Values
#include<iostream>
using namespace std;
class triangle //Creating Class
{
    float base,height;
    public:
    float area(float b=4, float h=7) //Default Value
    {
        base=b;
        height=h;
        return((base*height)*0.5);
    }
};
int main()
{
    triangle tr; //Object Creation
    float b,h; //Variable Declaration
    cout<<" Enter Height of TRIANGLE : ";
    cin>>h; //Taking Input
    cout<<" Enter Base of TRIANGLE : ";
    cin>>b;
    cout<<"\n By ACTUAL VALUE -> AREA : "<<tr.area(b,h); //Printing Area Of Triangle by Actual Value
    cout<<"\n By DEFAULT VALUE -> AREA : "<<tr.area(); //Printing Area Of Triangle by Default Value   
}