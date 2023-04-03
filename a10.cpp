#include <iostream>
using namespace std;
class tests
{
protected:
    int test_marks;
};
class activities
{
protected:
    int activities_marks;
};
class sports
{
protected:
    int sports_marks;
};
class result : protected tests, protected activities, protected sports
{
    int total;

public:
    result()
    {
        total = 0;
    }
    void input()
    {
        cout << " Enter TEST Marks : ";
        cin >> test_marks;
        cout << " Enter SPORTS Marks : ";
        cin >> sports_marks;
        cout << " Enter ACTIVITIES Marks : ";
        cin >> activities_marks;
    }
    int total_marks()
    {
        total = test_marks + activities_marks + sports_marks;
        return total;
    }
};
int main()
{
    result r;
    r.input();
    cout << "\n\t TOTAL Marks : " << r.total_marks() << endl;
    return 0;
}