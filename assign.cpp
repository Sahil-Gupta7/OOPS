#include <iostream>
using namespace std;
class NumSub
{
    int num;

public:
    NumSub()
    {
        num = 0;
    }
    NumSub(int n)
    {
        num = n;
    }
    void print()
    {
        cout << "\t Number -> " << num << endl;
    }
    void operator--()
    {
        try
        {
            while (num >= 0)
            {
                if (num == 0)
                {
                    throw(num);
                }
                else
                {
                    num--;
                    print();
                }
            }
        }
        catch (int m)
        {
            cout << "\n\t Caught an exception...\n\n";
        }
    }
};
int main()
{
    int n;
    cout << " Enter the Number : ";
    cin >> n;
    NumSub c1(n);
    --c1;
    return 0;
}