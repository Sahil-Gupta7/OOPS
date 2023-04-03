#include <bits/stdc++.h>
using namespace std;
class test
{
    int marks;

public:
    test(int m)
    {
        cout << " TEST CONSTRUCTOR CALLED" << endl;
        marks = m;
    }
    inline int get_marks()
    {
        return marks;
    }
};
class sports
{
    int marks;

public:
    sports(int m)
    {
        cout << " SPORTS CONSTRUCTOR CALLED" << endl;
        marks = m;
    }
    inline int get_marks()
    {
        return marks;
    }
};
class result : public sports, public test
{
public:
    inline result(int sports_marks, int marks) : test(marks), sports(sports_marks)
    {
    }
};
int main()
{
    int sports, marks;
    cout << "\n Enter the Marks in SPORTS : ";
    cin >> sports;
    cout << "\n Enter the Marks in SUBJECT : ";
    cin >> marks;
    result ob(sports, marks);
    cout << "\n The SPORTS MARKS are : " << ob.sports::get_marks();
    cout << "\n The TEST MARKS are : " << ob.test::get_marks();
}