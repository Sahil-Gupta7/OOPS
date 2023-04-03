#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main()
{
    int number1[] = {10, 15, 18, 24, 30};
    int divisor[] = {2, 5, 0, 5};
    int j = -1;
    for (int i = 0; i < 5; i++)
    {
        try
        {
            j++;
            if (j >= 4)
            {
                throw 1;
            }
            if (divisor[j] == 0)
            {
                throw runtime_error(" Math error: Attempted to divide by Zero\n");
            }
            cout << number1[i] / divisor[j] << endl;
        }
        catch (int a)
        {
            cout << " Array out of bound...";
        }
        catch (runtime_error &e)
        {
            cout << " Exception occurred" << endl << e.what();
        }
    }
    return 0;
}