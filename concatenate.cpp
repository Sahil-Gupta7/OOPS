//Program to Concatenate Two Strings
#include <iostream>
using namespace std;
class s3;
class s2;
class s1 //Creating Class
{
    char *a = new char[100]; 
    public:
        void input() //Function to take First String as Input
        {
            cout << " Enter the String : ";
            cin >> a; //Taking First String as Input
        }
    friend void concat(s1 ob1, s2 ob2, s3 ob3); //Friend function Declaration
};
class s2 //Creating Class
{
    char *b = new char[100];
    public:
        void input() //Function to take Second String as Input
        {
            cout << " \n Enter other String : ";
            cin >> b; //Taking Second String as Input
        }
    friend void concat(s1 ob1, s2 ob2, s3 ob3); //Friend function Declaration
};
class s3 //Creating Class
{
    char *c = new char[200];
    public:
        void display() //Function to Display
        {
            cout << " \n\tConcatenated String is : " << c << endl; //Printing Concatenated String
        }
    friend void concat(s1 ob1, s2 ob2, s3 ob3); //Friend function Declaration
};
void concat(s1 ob1, s2 ob2, s3 ob3) //Function to Concatenate
{
    int i, d = 0; //Variable Declaration
    for (i = 0; ob1.a[i] != '\0'; i++)
        ob3.c[d++] = ob1.a[i]; //Storing String 1 in 'c' till a Blankspace is Encountered
    for (i = 0; ob2.b[i] != '\0'; i++)
        ob3.c[d++] = ob2.b[i]; //Storing String 2 in 'c' till a Blankspace is Encountered
    ob3.c[d] = '\0';
    ob3.display();
}
//Driver Code
int main()
{ //Start of Main Function
    s1 ob1; //Object Creation
    s2 ob2; //Object Creation
    s3 ob3; //Object Creation
    ob1.input();
    ob2.input();
    concat(ob1, ob2, ob3);
    return 0;
} //End of Main Function