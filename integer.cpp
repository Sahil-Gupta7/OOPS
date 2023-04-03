//Program to take an Integer as Input using Function and Count No. of times a Function is Called and Print it
#include <iostream>
using namespace std;
class member //Creating Class
{
    int n; //Variable Declaration
    static int b;
    public:
        void input();
        void display();
};
int member::b = 0;
void member::input() //Function to take Integer as Input
{
    char ch;
    do
    { //Starting of do while Loop
        cout << "\tEnter an Integer : ";
        cin >> n; //Taking Integer as Input
        b++; //Counter
        cout << " Do you Wish to Continue ? (Y/N) : ";
        cin >> ch; //Taking User's Choice to Continue the Program
    } while (ch == 'Y' || ch == 'y'); //If condition to Check if the Entered Value is 'Y' or 'y'
}
void member::display() //Function to Display No. of times Function is Called
{
    cout << "\n\tNo. of Times Function Called : " << b; //Printing Number of Times a Function is Called
}
//Driver Code
int main()
{ //Start of Main Function
    member a; //Object Creation
    a.input();
    a.display();
    return 0;
} //End of Main Function