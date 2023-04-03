//Program to find Square and Cube of a Number using inline
#include <iostream>
#include <math.h>
using namespace std;
class power //Creating Class
{
    public:
        inline float square(float n) //Declaration of inline Function to find Square
        {
            return (pow(n, 2)); //Returning Square Value
        }
        inline float cube(float n) //Declaration of inline Function to find Cube
        {
            return (pow(n, 3)); //Returning Cube Value
        }
};
//Driver Code
int main()
{ //Starting of Main Function
    float n; //Variable Declaration
    power p; //Object Creation
    cout << " Enter A NUMBER : ";
    cin >> n; //Taking Number as Input
    cout << "\n\t SQUARE of NUMBER : " << p.square(n); //Printing Square of Number
    cout << "\n\t CUBE of NUMBER : " << p.cube(n);     //Printing Cube of Number
    return 0;
} //Ending of Main Function