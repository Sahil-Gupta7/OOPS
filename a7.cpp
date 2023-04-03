#include <iostream>
using namespace std;

class student
{
protected:
    char name[20];
    int roll;

public:
    void getdata()
    {
        cout << " Enter Student's NAME : ";
        cin >> name;
        cout << " Enter Student's ROLL NUMBER : ";
        cin >> roll;
    }
};

class test : public virtual student
{
protected:
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;

public:
    void getmark()
    {
        cout << " Enter MARKS for Subject 1 : ";
        cin >> sub1;
        cout << " Enter MARKS for Subject 2 : ";
        cin >> sub2;
        cout << " Enter MARKS for Subject 3 : ";
        cin >> sub3;
        cout << " Enter MARKS for Subject 4 : ";
        cin >> sub4;
        cout << " Enter MARKS for Subject 5 : ";
        cin >> sub5;
    }
    void details()
    {
        cout << "\n\t STUDENT'S DETAIL : \n";
        cout << " NAME : " << name << "\n ROLL NUMBER : " << roll << endl;
        cout << " MARKS in 5 Subjects : " << sub1 << ", " << sub2 << ", " << sub3 << ", " << sub4 << ", " << sub5 << endl;
    }
};

class sports : public virtual student
{
protected:
    int msports;

public:
    void getspo()
    {
        cout << " Enter MARKS in SPORTS : ";
        cin >> msports;
    }
};

class result : public sports, public test
{
    int total;
    double per;

public:
    void display()
    {
        cout << " MARKS in SPORTS : " << msports << endl;
        total = sub1 + sub2 + sub3 + sub4 + sub5 + msports;
        cout << "\t TOTAL MARKS : " << total;
        per = total / 6.0;
        cout << "\n\t PERCENTAGE = " << per << "%" << endl;
    }
};

int main()
{
    result ob1;
    ob1.getdata();
    ob1.getmark();
    ob1.getspo();
    ob1.details();
    ob1.display();
}