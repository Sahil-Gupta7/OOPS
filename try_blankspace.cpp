#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100], s;
    int i;
    cout << " Enter a String : ";
    cin.getline(str, 100);
    for (i = 0; i <= str[i]; i++)
    {
        try
        {
            if (str[i] == ' ')
                throw(str[i]);
        }
        catch (...)
        {
            cout << "\n\t Exception Caught...";
        }
    }
}
