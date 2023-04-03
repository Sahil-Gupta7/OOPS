//Program to create a Class which store x and y coordinates of a point and Calculate Distance
#include<iostream>
#include<math.h>
using namespace std;
class dist //Creating Class
{
    int x,y;
    public:
    void getdata() //Member Function to take X and Y Coordinates as Input
    {
        cout<<"\n Enter X and Y Coordinates : ";
        cin>>x>>y; //Taking Input
    }
    void display() //Member Function to Display X and Y Coordinates
    {
        cout<<"("<<x<<" , "<<y<<")"<<endl; //Printing Statement
    }
    double add(dist a,dist b) //Member Function to find Distance between two Coordinates
    {
        return sqrt(pow(b.x - a.x,2) + pow(b.y - a.y,2)); //Finding Distance
    }
};
int main()
{
    dist c1,c2; //Object Creation
    c1.getdata();
    c2.getdata();
    cout<<"\n COORDINATE 1 : ";
    c1.display();
    cout <<"\n COORDINATE 2: ";
    c2.display();
    c1.add(c1,c2);
    cout <<"\n Distance between the coordinates : "<<c1.add(c1,c2)<<endl; //Printing Statement
    return 0;
}