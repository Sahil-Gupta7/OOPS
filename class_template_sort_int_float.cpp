#include <iostream>
using namespace std;
template <class T>
class Arr
{
    T *a;
    int n;

public:
    Arr()
    {
        cout << " Enter the Size of Array : ";
        cin >> n;
        a = new T[n];
    }
    void get()
    {
        int i;
        for (i = 0; i < n; i++)
        {
            cout << " Enter the Element : ";
            cin >> a[i];
        }
    }
    void sort()
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
    void display()
    {
        int i;
        for (i = 0; i < n; i++)
            cout << a[i] << "   ";
        cout << endl;
    }
};
int main()
{
    Arr<int> x;
    cout << "\t Enter INTEGER ARRAY : " << endl;
    x.get();
    cout << endl;
    Arr<float> y;
    cout << "\t Enter FLOAT ARRAY : " << endl;
    y.get();
    cout << endl;
    Arr<char> z;
    cout << "\t Enter CHAR ARRAY : " << endl;
    z.get();
    cout << "\n\t BEFORE SORTING " << endl;
    cout << " INTEGER ARRAY\t :  ";
    x.display();
    cout << " FLOAT ARRAY\t :  ";
    y.display();
    cout << " CHAR ARRAY\t :  ";
    z.display();
    x.sort();
    y.sort();
    z.sort();
    cout << "\n\t AFTER SORTING " << endl;
    cout << " INTEGER ARRAY\t :  ";
    x.display();
    cout << " FLOAT ARRAY\t :  ";
    y.display();
    cout << " CHAR ARRAY\t :  ";
    z.display();
    return 0;
}
