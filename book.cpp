//Program to Take Details of n No. of Books and Print Details of Books in Given Range
#include <iostream>
using namespace std;
class book //Creating Class
{
    char name[20];
    char authname[30];
    int price;
    public:
        void input() //Function to take Details of Books as Input
        {
            cout << " Enter Name of the Book : ";
            cin >> name; //Taking Name of the Book as Input
            cout << " Enter the Author's Name : ";
            cin >> authname; //Taking Name of the Author as Input
            cout << " Enter Price of the Book : ";
            cin >> price; //Taking Price of the Book as Input
        }
        void display() //Function to Display the Details of Books
        {
            cout << endl;
            cout << "\tName of the Book : " << name << "\n\tAuthor's Name : " << authname << "\n\tPrice of the Book : " << price;
            //Printing Statement to Display Detail of Books in Given Range
            cout << endl;
        }
    friend void check(int p1, int p2, book); //Friend function Declaration
};
void check(int p1, int p2, book m) //Fumction to Check Which Books lie in Given Range
{
    if (m.price >= p1 && m.price <= p2) //If condition to Check which Book's Price fall in Given Range
        m.display();
}
//Driver Code
int main()
{ //Start of Main Function
    int p1, p2, i, n; //Variable Declaration
    cout << " Enter No. of Entries : ";
    cin >> n; //Taking No. of Entries as Input
    book data[n]; //Object Creation
    for (i = 0; i < n; i++)
    { //For loop to Take Details of 'n' Books as Input
        cout << "\n\tGive Details for " << i + 1 << " Book : " << endl;
        data[i].input();
    }
    cout << endl;
    cout << "\t Give Lower Limit of Price Range : ";
    cin >> p1; //Taking Lower Limit of Range as Input
    cout << "\t Give Upper Limit of Price Range : ";
    cin >> p2; //Taking Upper Limit of Range as Input
    for (i = 0; i < n; i++)
        check(p1, p2, data[i]);
    return 0;
} //Ending of Main Function