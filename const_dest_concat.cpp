//Program to take Two Strings as Input and display the Concatenated String including all type of Constructors and Destructor
#include <iostream>
#include <string.h>
using namespace std;
class STRING //Creating Class
{
    char str[25];
    int l;
    char *st = new char[25];

public:
    STRING() //Default Constructor
    {
        strcpy(str, "OOP");
        l = strlen(str);
        cout << "\n\n\t\t DEFAULT CONSTRUCTOR :\n";
        cout << "\t String is " << str << " and Length is : " << l;
    }
    STRING(char a[]) //Parameterized Constructor
    {
        strcpy(str, a);
        l = strlen(str);
        cout << "\n\n\t\t PARAMETERIZED CONSTRUCTOR :\n";
        cout << "\t String is " << str << " and Length is " << l;
    }
    STRING(STRING &s) //Copy Constructor
    {
        strcpy(str, s.str);
        l = strlen(str);
        cout << "\n\n\t\t COPY CONSTRUCTOR :\n";
        cout << "\t String is " << str << " and Length is " << l;
    }
    STRING(char *s, int len) //Dynamic Constructor
    {
        strcpy(st, s);
        len = strlen(st);
        cout << "\n\n\t\t DYNAMIC CONSTRUCTOR :\n";
        cout << "\t String is " << st << " and Length is " << len;
        strcpy(str, st);
    }
    void concatenate(STRING &x)
    {
        int z = 0;
        for (int i = 0; i < l; i++)
        {
            str[z++] = str[i];
        }
        for (int i = 0; i < l; i++)
        {
            str[z++] = x.str[i];
        }
    }
    void display()
    {
        cout << "\n\n\t CONCATENATED String is : " << str << endl;
    }
    ~STRING() //Destructor
    {
        cout << "\nDESTRUCTOR Invoked... ";
        delete[] st;
    }
};
//Driver Code
int main()
{
    char str[25], str1[25]; //Variable Declaration
    cout << " Enter the First String : ";
    cin >> str; //Taking First String as Input
    cout << " Enter the Second String : ";
    cin >> str1; //Taking Second String as Input
    STRING s1;
    STRING s2(str);
    STRING s3(s2);
    STRING s4(str1, 0);
    s2.concatenate(s4);
    s2.display();
    return 0;
}