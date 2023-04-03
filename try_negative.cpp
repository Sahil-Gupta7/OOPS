#include <iostream>
using namespace std;
int main()
{
    int arr[10], i;
    cout << "\t Enter 10 Array Elements : \n";
    for (i = 0; i < 10; i++)
    {
        cout << " Enter a Number : ";
        cin >> arr[i];
    }
    for (i = 0; i < 10; i++)
    {
        try
        {
            if (arr[i] < 0)
                throw(arr[i]);
        }
        catch (...)
        {
            cout << "\n\t Exception Caught...";
        }
    }
    for (i = 0; i < 10; i++)
    {
        try
        {
            if (arr[i] < 0)
                throw(i);
        }
        catch (int i)
        {
            arr[i] = -arr[i];
        }
    }
    cout << "\n\n\t After taking corrective measures on Negative numbers : " << endl;
    for (int i = 0; i < 10; i++)
        cout << arr[i] << "\t";
}