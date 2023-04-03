#include <string.h>
using namespace std;
#include <iostream>
class student
{
protected:
    int n;
    int roll[5];
    char name[5][20];

public:
    int marks[5], i;
    void getinfo()
    {
        for (i = 0; i < 5; i++)
        {
            cout << " Enter the name of the student : ";
            cin >> name[i];
            cout << " Enter the roll no of the student : ";
            cin >> roll[i];
            cout << " Enter the total marks of the student : ";
            cin >> marks[i];
            cout << endl;
        }
    }
    void display()
    {
        cout << "\n\n\t ALL STUDENTS LIST :\n";
        for (i = 0; i < 5; i++)
        {
            cout << endl;
            cout << " Name of student : " << name[i];
            cout << endl;
            cout << " Roll no of student : " << roll[i];
            cout << endl;
            cout << " Marks of student : " << marks[i];
            cout << endl;
        }
    }
};
class topper : public student
{
private:
    int max1, mrollno;
    char mname[20];

public:
    int i, k;
    void total()
    {
        max1 = marks[0];
        for (i = 0; i < 5; i++)
        {
            for (k = i + 1; k < 5; k++)
            {
                if (marks[i] <= marks[k])
                {
                    max1 = marks[i];
                    marks[i] = marks[k];
                    marks[k] = max1;
                    mrollno = roll[i];
                    roll[i] = roll[k];
                    roll[k] = mrollno;
                    strcpy(mname, name[i]);
                    strcpy(name[i], name[k]);
                    strcpy(name[k], mname);
                }
            }
        }
    }
    void top()
    {
        cout << "\n\n\t TOPPERS LIST :\n";
        for (i = 0; i < 3; i++)
        {
            cout << endl;
            cout << " Name of student : " << name[i];
            cout << endl;
            cout << " Roll no of student : " << roll[i];
            cout << endl;
            cout << " Marks of student : " << marks[i];
            cout << endl;
        }
    }
    void display1()
    {
        getinfo();
        display();
        total();
    }
};
int main()
{
    topper t;
    t.display1();
    t.top();
}