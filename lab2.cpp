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
    int marks[5];

public:
    void input()
    {
        cout << " Enter the NAME of the Student : ";
        cin >> name;
        cout << " Enter the ROLL NUMBER of the Student : ";
        cin >> roll;
        cout << " Enter the AGE of the Student : ";
        cin >> age;
        for (int i = 1; i <= 5; i++)
        {
            cout << "   Enter MARKS in Subject " << i << " : ";
            cin >> marks[i];
        }
    }
    void display()
    {
        cout << "\n\t The Name of the Student is : " << name;
        cout << "\n\t " << name << " has Roll Number " << roll << " and is " << age << " years old. ";
        cout << "\n\t Marks in different Subjects are :- \n";
        for (int i = 1; i <= 5; i++)
        {
            cout << "\t\t Marks in Subject " << i << " : " << marks[i] << endl;
        }
    }
};
int main()
{
    test t;
    t.input();
    t.display();
}