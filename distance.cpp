//Program to Store 2 Distances in Feet and Inches and Find there Sum
#include <iostream>
using namespace std;
class dist //Creating Class
{
    double feet; //Variable Declaration
    double inches;
    int i,n;
    public:
        void getdata() //Function to take Data Input
        {
            cout << "\n Enter Feet : ";
            cin >> feet; //Taking Distance in Feet as Input
            cout << " Enter Inches : ";
            cin >> inches; //Taking Distance in Inches as Input
            n=inches/12;
            for(i=0;i<n;i++)
            { //for Loop to continue till Inches become less than 12
                if (inches > 12.0)
                { //If Inches is More than 12 then Adding 1 to Feet and Subtracting 12 from Inches
                    feet += 1;
                    inches = inches - 12;
                }
            }
        }
    void display() //Function to Display Distance
    {
        cout << "\t" << feet << " Feet and " << inches << " Inches " << endl; //Printing Statement to Display Distance
    }
    void add(dist a, dist b) //Function to Add both Distances
    {
        inches = a.inches + b.inches; //Adding Inches of both Distances
        feet = a.feet + b.feet; //Adding Feet of both Distances
        n=inches/12;
        for(i=0;i<n;i++)
        { //for Loop to continue till Inches become less than 12
            if (inches > 12.0)
            { //If Inches is More than 12 then Adding 1 to Feet and Subtracting 12 from Inches
                feet += 1;
                inches = inches - 12;
            }
        }
    }
    dist add(dist b)
    {
        dist temp; //Object Creation
        temp.inches = inches + b.inches; //Adding Inches
        temp.feet = feet + b.feet; //Adding Inches
        n=temp.inches/12;
        for(i=0;i<n;i++)
        { //for Loop to continue till Inches become less than 12
            if (temp.inches > 12.0)
            { //If Inches is More than 12 then Adding 1 to Feet and Subtracting 12 from Inches
                temp.feet += 1;
                temp.inches = temp.inches - 12;
            }
        }
        return temp;
    }
};
//Driver Code
int main()
{ //Starting of Main Function
    dist c1, c2, c3, c4; //Object Creation
    cout << "\tDistance 1 : ";
    c1.getdata();
    cout << "\n\tDistance 2 : ";
    c2.getdata();
    cout << "\n\tDistance 1 : ";
    c1.display();
    cout << "\tDistance 2 : ";
    c2.display();
    c3.add(c1, c2);
    cout << "Output for C3.Add method : "; //Printing Statement
    c3.display();
    c4 = c1.add(c2);
    cout << "Output for C4=C1.Add method : ";
    c4.display();
    return 0;
} //Ending of Main Function