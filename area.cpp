//Program to Overload area Function to Calculate Area of Triangle, Area of Rectangle, Area of Circle and Area of Cylinder
#include <iostream>
#include <math.h>
#define pie 3.14 //Global Variable
using namespace std;
class overloading //Creating Class
{
public:
    float area(float s1, float s2, float s3) //Function for TRIANGLE
    {
        float s, y; //Variable Declaration
        s = s1 + s2 + s3;
        s = s / 2;
        y = s * (s - s1) * (s - s2) * (s - s3);
        return (pow(y, 0.5)); //Returning Statement to Print Area of TRIANGLE
    }
    int area(int l, int b) //Function for RECTANGLE
    {
        return (l * b); //Returning Statement to Print Area of RECTANGLE
    }
    float area(float r) //Function for CIRCLE
    {
        return (pie * r * r); //Returning Statement to Print Area of CIRCLE
    }
    float area(float cr, float cht) //Function for CYLINDER
    {
        return ((2 * pie * cr * cht) + (2 * pie * cr * cr)); //Returning Statement to Print Area of CYLINDER
    }
};
//Driver Code
int main()
{
    int l, b, x; //Variable Declaration
    char ch;
    float s1, s2, s3, cr, h, r;
    overloading a; //Creating Object
    do
    {
        cout << "\n\t1 -> To Find Area of TRIANGLE \n\t2 -> To Find Area of RECTANGLE\n\t3 -> To Find Area of CIRCLE \n\t4 -> To Find Area of CYLINDER\n";
        cout << " Enter Your CHOICE : ";
        cin >> x; //Taking User's Choice as Input
        switch (x)
        { //Switch Case loop
        case 1:
            cout << " Enter LENGTH of First Side of TRIANGLE : ";
            cin >> s1; //Statements to take Dimensions of TRIANGLE as Input
            cout << " Enter LENGTH of Second Side of TRIANGLE : ";
            cin >> s2;
            cout << " Enter LENGTH of Third Side of TRIANGLE : ";
            cin >> s3;
            cout << "\n\t AREA of TRIANGLE : " << a.area(s1, s2, s3) << " sq. units"; //Printing Statement for Area of TRIANGLE
            cout << endl;
            break; //Break Statement
        case 2:
            cout << " Enter Length of RECTANGLE : ";
            cin >> l; //Statements to take Dimensions of RECTANGLE as Input
            cout << " Enter Breadth of RECTANGLE : ";
            cin >> b;
            cout << "\n\t AREA of RECTANGLE : " << a.area(l, b) << " sq. units"; //Printing Statement for Area of RECTANGLE
            cout << endl;
            break; //Break Statement
        case 3:
            cout << " Enter Radius of CIRCLE : ";
            cin >> r; //Statements to take Dimensions of CIRCLE as Input
            cout << "\n\t AREA of CIRCLE : " << a.area(r) << " sq. units"; //Printing Statement for Area of CIRCLE
            cout << endl;
            break; //Break Statement
        case 4:
            cout << " Enter Radius of CYLINDER : ";
            cin >> cr; //Statements to take Dimensions of CYLINDER as Input
            cout << " Enter Height of CYLINDER : ";
            cin >> h;
            cout << "\n\t AREA of CYLINDER : " << a.area(cr, h) << " sq. units"; //Printing Statement for Area of RECTANGLE
            cout << endl;
            break; //Break Statement
        default:
            cout << "\nSORRY!!! WRONG ENTRY..."; //Default Case if User Enter Wrong Choice
        }
        cout << "\nDo You Want To CONTINUE ? (Y/N) : ";
        cin >> ch; //Statement to take User's Wish to Continue the Program
    } while (ch == 'Y' || ch == 'y');
}