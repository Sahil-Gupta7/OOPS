#include <iostream>
using namespace std;
template <class T>
void sort(T a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                T temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
template <class t>
void display(t a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << a[i] << "   ";
    cout << endl;
}
int main()
{
    int n, i;
    cout << " Enter the Value of N : ";
    cin >> n;
    int a[n];
    float b[n];
    char c[n];
    cout << "\n\t Enter INTEGER ARRAY : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << " Enter the Element : ";
        cin >> a[i];
    }
    cout << "\n\t Enter FLOAT ARRAY : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << " Enter the Element : ";
        cin >> b[i];
    }
    cout << "\n\t Enter CHAR ARRAY : " << endl;
    ;
    for (i = 0; i < n; i++)
    {
        cout << " Enter the Element : ";
        cin >> c[i];
    }
    cout << "\n\t BEFORE SORTING " << endl;
    cout << " INTEGER ARRAY\t :  ";
    display(a, n);
    cout << " FLOAT ARRAY\t :  ";
    display(b, n);
    cout << " CHAR ARRAY\t :  ";
    display(c, n);
    sort(a, n);
    sort(b, n);
    sort(c, n);
    cout << "\n\t AFTER SORTING " << endl;
    cout << " INTEGER ARRAY\t :  ";
    display(a, n);
    cout << " FLOAT ARRAY\t :  ";
    display(b, n);
    cout << " CHAR ARRAY\t :  ";
    display(c, n);
    return 0;
}