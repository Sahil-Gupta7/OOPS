#include <iostream>
using namespace std;
template <class T>
void maximum(T a[], int n)
{
    int i;
    T max = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "\n\t MAXIMUM Value is " << max << endl;
}
int main()
{
    int n, i;
    cout << " Enter Size of the Array : ";
    cin >> n;
    int a[n];
    float b[n];
    cout << "\t Enter INTEGER Array : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << " Enter the Element : ";
        cin >> a[i];
    }
    maximum(a, n);
    cout << endl;
    cout << "\t Enter FLOAT Array : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << " Enter the Element : ";
        cin >> b[i];
    }
    maximum(b, n);
    return 0;
}