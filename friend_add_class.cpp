//Program to declare friend function in two classes to calculate the sum of integers of both the classes
#include <iostream>
using namespace std;
class B;
class A //Creating Class
{
    int x; //Variable Declaration
public:
    void input()
    { //Function to take First Integer as Input
        cout << "\n Enter First Integer : ";
        cin >> x;               //Taking First Integer as Input
        cout << "\t x = " << x; //Printing First Integer
    }
    friend void sum(A &a, B &b); //Declaration
};
class B //Creating Class
{
    int y; //Variable Declaration
public:
    void input()
    { //Function to take Second Integer as Input
        cout << "\n Enter Second Integer : ";
        cin >> y;               //Taking Second Integer as Input
        cout << "\t y = " << y; //Printing Second Integer
    }
    friend void sum(A &a, B &b); //Declaration
};
void sum(A &a, B &b)
{                                                                              //Function to find Sum of two Integer
    cout << "\n SUM (x+y) -> (" << a.x << " + " << b.y << ") : " << a.x + b.y; //Printing Sum of Two Integer
}
//Driver Code
int main()
{          //Starting of Main Function
    A ob1; //Object Creation
    B ob2; //Object Creation
    ob1.input();
    ob2.input();
    sum(ob1, ob2);
} //Ending of Main Function