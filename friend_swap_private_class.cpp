#include <iostream>
#include <conio.h>
using namespace std;
class b;
class a //Creating Class
{
    int x;
    public:
        a(int c)
        {
            x = c;
        }
    friend void swap(a, b); //Declaring of friend function
};
class b //Creating Class
{
    int y;
    public:
        b(int d)
        {
            y = d;
        }
    friend void swap(a, b); //Declaring of friend function
};
void swap(a e, b f) //Swap Function
{
    int temp; //Variable Declaration
    cout << "Enter the value of A = ";
    cin >> e.x; //Taking Value of A as Input
    cout << "Enter the Value of B = ";
    cin >> f.y; //Taking Value of B as Input
    cout << "\n\t BEFORE SWAPPING : A = " << e.x << " and B = " << f.y; //Printing Values Before Swapping
    temp = e.x; //Swapping Code
    e.x = f.y;
    f.y = temp;
    cout << endl;
    cout << "\n\t AFTER SWAPPING : A = " << e.x << " and B = " << f.y; //Printing Values After Swapping
    cout << endl;
}
//Driver Code
int main()
{
    a e(1);
    b f(2);
    swap(e, f);
    return 0;
}