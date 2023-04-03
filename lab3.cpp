#include <iostream>
using namespace std;
class student
{
protected:
    char name[25];
    int roll;
    int age;
};
class test : public student
{
protected:
    int marks[5];

public:
    void input()
    {
        cout << "Enter the name of the student : ";
        cin >> name;
        cout << "Enter the roll number of the student : ";
        cin >> roll;
        cout << "Enter the age of the student : ";
        cin >> age;
        for (int i = 1; i <= 5; i++)
        {
            cout << "Enter marks in Subject " << i << " : ";
            cin >> marks[i];
        }
    }
    void display()
    {
        cout << "\nThe name of the student is : " << name;
        cout << "\n"
             << name << " has roll number " << roll << " and is " << age << " years old. ";
        cout << "\nTheir marks in different subjects are : \n";
        for (int i = 1; i <= 5; i++)
        {
            cout << "Marks in Subject " << i << " : " << marks[i] << endl;
        }
    }
};
class result : public test, public student
{
public:
    void calculate()
    {
        int sum;
        for (int i = 1; i <= 5; i++)
            sum += marks[i];
        cout << "\nTotal marks of the student are : " << sum;
        cout << "\nPercentage is : " << sum / 5 << " % ";
    }
};
int main()
{
    result r;
    r.input();
    r.display();
    r.calculate();
}