//Program to take Time in hh:mm format, include all type of Constructors and Destructor also Parameterized Constructor should provide value zero if not provided and Display it
#include <iostream>
using namespace std;
class Time //Creating Class
{
    int hour;
    int min;

public:
    Time() //Default Constructor
    {
        hour = 7;
        min = 27;
        cout << "\n\t\t DEFAULT CONSTRUCTOR : \n";
        cout << "\t TIME -> " << hour << " : " << min << endl;
    }
    Time(int h, int m = 00) //Parameterized Constructor
    {
        cout << "\n\t\t PARAMETERIZED CONSTRUCTOR : \n";
        hour = h;
        min = m;
        cout << "\t TIME -> " << h << " : " << m << endl;
    }
    Time(const Time &t1) //Copy Constructor
    {
        hour = t1.hour;
        min = t1.min;
        cout << "\n\t\t COPY CONSTRUCTOR : \n";
    }
    int gethour()
    {
        return hour;
    }
    int getmin()
    {
        return min;
    }
};
//Driver Code
int main()
{
    int h, m; //Variable Declaration
    cout << " Enter the HOUR : ";
    cin >> h; //Taking Hours as Input
    cout << " Enter the MINUTES : ";
    cin >> m; //Taking Minutes as Input
    Time t;
    Time t1(h);
    Time t2(h, m);
    Time t3 = t2;
    cout << "\t TIME -> " << t2.gethour() << " : " << t2.getmin() << "\n\n";
    return 0;
}