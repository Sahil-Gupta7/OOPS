//Program to Swap Two Integers using Pass by Reference
#include <iostream>
using namespace std;
class swapp //Creating Class
{
    public:
        void swap(int &a, int &b) //Swap Function to Swap Two Integers using Pass by Reference
        {
            int temp; //Variable Declaration
            temp = a; //Storing Value of a in temp variable
            a = b; //Storing Value of b in a
            b = temp; //Storing Value of temp variable in b
        }
};
//Driver Code
int main()
{ //Starting of Main Function
    int a, b; //Variable Function
    swapp s; //Object Creation
    cout << " Enter First INTEGER : ";
    cin >> a; //Taking First Integer as Input
    cout << " Enter Second INTEGER : ";
    cin >> b; //Taking Second Integer as Input
    cout << "\n\t Integers Before SWAPPING :\t" << a << " and " << b << endl; //Printing Values of Both Integers Before Swapping
    s.swap(a, b);
    cout << "\t Integers After SWAPPING :\t" << a << " and " << b << endl; //Printing Values of Both Integers After Swapping
} //Ending of Main Function