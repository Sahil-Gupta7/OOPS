//Program to take Two Distances one in Metre & Centimetre and other in Feet & Inch as Input and Print Maximum Distance
#include <iostream>
using namespace std;
class dm;
class df //Creating Class
{
    float inches, feet;
    public:
        void input() //Function to Take Distance in Feet & Inches as Input
        {
            int n, i;
            cout << " \n Enter Distance in Feet : ";
            cin >> feet; //Taking Distance in Feet as Input
            cout << " Enter Distance in Inches : ";
            cin >> inches; //Taking Distance in Inches as Input
            n = inches / 12; 
            for (i = 0; i < n; i++)
            { //for Loop to continue till Inches become less than 12
                if (inches >= 12.0)
                { //If Inches is More than 12 then Adding 1 to Feet and Subtracting 12 from Inches
                    feet += 1;
                    inches = inches - 12;
                }
            }
            cout << "\n\t Actual Distance : ";
            cout << feet << " Feet and " << inches << " Inches " << endl; //Printing Statement to Display Distance
        }
    friend void display(dm, df);
};
class dm //Creating Class
{
    float m, cm;
    public:
        void input() //Function to Take Distance in Metre & Centimetres as Input
        {
            int i, n;
            cout << " Enter Distance in Metre : ";
            cin >> m; //Taking Distance in Metre as Input
            cout << " Enter Distance in Centimetre : ";
            cin >> cm; //Taking Distance in Centimetre as Input
            n = cm / 100;
            for (i = 0; i < n; i++)
            { //for Loop to continue till Centimetres become less than 100
                if (cm >= 100.0)
                { //If Centimetre is More than 100 then Adding 1 to Metre and Subtracting 100 from Centimetres
                    m += 1;
                    cm = cm - 100;
                }
            }
            cout << "\n\t Actual Distance : ";
            cout << m << " Metre and " << cm << " Centimetre " << endl; //Printing Statement to Display Distance
        }
    friend void display(dm, df);
};
void display(dm x, df y) //Function to Convert both Distnaces to Centimetre and then Comparing them
{
    y.inches = y.inches * 2.54; //Converting Inches to Centimetre
    y.feet = y.feet * 30.48; //Converting Feet to Centimetre
    y.feet += y.inches; //Adding the Converted Feet and Inches
    cout<<"\n Distance of Feet and Inches Converted to Centimetres : "<<y.feet<<" cm";
    x.m = x.m * 100; //Converting Metre to Centimetre
    x.m += x.cm; //Adding the Converted Metre and Centimetres
    cout<<"\n Distance of Metre and Centimetres Converted to Centimetres : "<<x.m<<" cm";
    cout<<endl;
    if (y.feet > x.m) //If Condition if Converted Feet is more than Metre
        cout << "\n\t Distance in Feet and Inches is more "; 
    else if (x.m > y.feet) //If Condition if Converted Metre is more than Feet
        cout << "\n\t Distance in Metre and Centimetres is more ";
    else //If Condition if both Distances are Equal
        cout << "\n\t Both Distances are Equal ";
}
//Driver Code
int main()
{ //Start of Main Function
    dm x; //Object Creation
    df y; //Object Creation
    x.input();
    y.input();
    display(x, y);
    return 0;
} //End of Main Function