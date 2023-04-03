///Program to Display a Character 'n' times using function, If 'n' is not provided then Print 80 times, If Character is not provided then print "*" 80 times using FUNCTION OVERLOADING
#include <iostream>
using namespace std;
class character //Creating Class
{
    public:
        void pprint(char c='*', int n=80)
        {
            int i; //Variable Declaration
            for (i = 0; i < n; i++) //for Loop to Print Character 'n' times
                cout << c << "\t"; //Printing Characters 'n' times
            cout << endl;
        }
        void print(char c)
        {
            int i; //Variable Declaration
            for (i = 0; i < 80; i++) //for Loop to Print Character 80 times
                cout << c<<"\t"; //Printing Character 80 times
            cout << endl;
        }
        void print()
        {
            int i; //Variable Declaration
            for (i = 0; i < 80; i++) //for Loop to Print "*" 80 times
                cout <<"*\t"; //Printing "*" 80 times
            cout << endl;
        }
};
//Driver Code
int main()
{ //Starting of Main Function
    character a; //Object Creation
    char c, ch1, ch2; //Variable Declaration
    int n;
    cout << " Do you want to Enter Character? (Y/N) : ";
    cin >> ch1; //Taking User's Choice to Enter Character as Input
    if (ch1 == 'Y' || ch1 == 'y')
    { //If Condition for if User wishes to Enter Character
        cout << " Enter Character : ";
        cin >> c; //Taking Character as Input
        cout << " Do you want to Enter Number of Times you want to Display? (Y/N) :";
        cin >> ch2; //Taking User's Choice to Enter Value of 'n' as Input
        if (ch2 == 'Y' || ch2 == 'y')
        { //If Condition for if User wishes to Enter 'n' Value
            cout << " Enter Number of Times you want to Display : ";
            cin >> n; //Taking Value of 'n' as Input
            a.pprint(c, n); //Passing both Character and n Value
        }
        else //If User wishes not to Enter Value of 'n'
            a.print(c); //Passing Character only
    }
    else //If User wishes to Enter neither Character nor Value of 'n'
        a.print();
} //Ending of Main Function