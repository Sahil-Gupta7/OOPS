//Program to Swap Two Numbers
#include <iostream>
using namespace std;
class b;
class a //Creating Class
{
    int x; //Variable Declaration
    friend void swap(a &ob1, b &ob2); //Friend function Declaration
    public:
        void input() //Function to Take Value of A as Input
        {
            cout << "Enter the Value of A = ";
            cin >> x; //Taking Value of A as Input
        }
        void display() //Function to Display Swapped Value
        {
            cout << "\n\t AFTER SWAPPING : A = " << x; //Printing Swapped Value
        }
};
class b //Creating Class
{
    int y; //Variable Declaration
    friend void swap(a &ob1, b &ob2); //Friend function Declaration
    public:
        void input() //Function to Take Value of B as Input
        {
            cout << "Enter the Value of B = ";
            cin >> y; //Taking Value of B as Input
        }
        void display() //Function to Display Swapped Value
        {
            cout << "\n\t AFTER SWAPPING : B = " << y; //Printing Swapped Value
        }
};
void swap(a &ob1, b &ob2) //Function to Swap Number
{
    int temp; //Variable Declaration
    temp = ob1.x; 
    ob1.x = ob2.y;
    ob2.y = temp; //Swapping Code
}
//Driver Code
int main()
{ //Start of Main Function
    a ob1; //Object Creation
    b ob2; //Object Creation
    ob1.input();
    ob2.input();
    swap(ob1, ob2);
    ob1.display();
    ob2.display();
    return 0;
} //Start of Main Function