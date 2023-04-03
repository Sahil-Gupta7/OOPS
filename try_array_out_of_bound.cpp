#include <iostream>
using namespace std;
int access(int a[])
{
    int x;
    cout << "\n Enter position of element you want to access : ";
    cin >> x;
    if (x < 0 || x > 4)
    {
        throw(x);
    }
    else
        return a[x];
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "\t Enter the Element : ";
        cin >> arr[i];
    }
    try
    {
        int ele = access(arr);
        cout << "\t The Element is " << ele << endl;
    }
    catch (int i)
    {
        cout << "\t Exception occurred (Array out of bounds)...";
    }
}