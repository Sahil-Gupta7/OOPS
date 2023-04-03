//Program to Overload volume Function to Calculate Volume of Sphere, Cylinder and Cuboid
#include <iostream>
#include <math.h>
#define pie 3.14 //Global Variable
using namespace std;
class overloading //Creating Class
{
public:
    float volume(float r) //Function for SPHERE
    {
        return ((4 * pie * r * r * r)/3); //Returning Statement to Print Volume of SPHERE
    }
    float volume(float cr, float cht) //Function for CYLINDER
    {
        return (pie * cr * cr * cht); //Returning Statement to Print Volume of CYLINDER
    }
    float volume(float w, float h, float l) //Function for CUBOID
    {
        return (w * h * l); //Returning Statement to Print Volume of CUBOID
    }
};
//Driver Code
int main()
{
    int x; //Variable Declaration
    char ch;
    float w, h, l, cr, cht, r;
    overloading a; //Object Creation
    do
    {
        cout << "\n\t1 -> To Find VOLUME of SPHERE \n\t2 -> To Find VOLUME of CYLINDER\n\t3 -> To Find VOLUME of CUBOID\n";
        cout << " Enter Your CHOICE : ";
        cin >> x; //Taking User's Choice as Input
        switch (x)
        { //Switch Case loop
        case 1:
            cout << " Enter RADIUS of SPHERE : ";
            cin >> r; //Statements to take Dimensions of Sphere as Input
            cout << "\n\t VOLUME of SPHERE : " << a.volume(r) << " cubic unit"; //Printing Statement for Volume of Sphere
            cout << endl;
            break; //Break Statement
        case 2:
            cout << " Enter RADIUS of CYLINDER : ";
            cin >> cr; //Statements to take Dimensions of CYLINDER as Input
            cout << " Enter HEIGHT of CYLINDER : ";
            cin >> cht;
            cout << "\n\t VOLUME of CYLINDER : " << a.volume(cr, cht) << " cubic unit"; //Printing Statement for Volume of CYLINDER
            cout << endl;
            break; //Break Statement
        case 3:
            cout << " Enter LENGTH of CUBOID : ";
            cin >> l; //Statements to take Dimensions of CUBOID as Input
            cout << " Enter WIDTH of CUBOID : ";
            cin >> w;
            cout << " Enter HEIGHT of CUBOID : ";
            cin >> h;
            cout << "\n\t VOLUME of CUBOID : " << a.volume(w, l, h) << " cubic unit"; //Printing Statement for Volume of CUBOID
            cout << endl;
            break; //Break Statement
        default:
            cout << "\nSORRY!!! WRONG ENTRY..."; //Default Case if User Enter Wrong Choice
        }
        cout << "\nDo You Want To CONTINUE ? (Y/N) : ";
        cin >> ch; //Statement to take User's Wish to Continue the Program
    } while (ch == 'Y' || ch == 'y');
}