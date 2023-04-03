//Program to Take Details of Student of a Class as Input and Print the Average of the Class
#include <iostream>
using namespace std;
class Stud //Creating Class
{
    public:
        int roll; //Variable Declaration
        float mark[5];
        char name[30];
        float total;
        float average;
        static float avg;
        void getData() //Function to Take Student's Details as Input
        {
            int i; //Variable Declaration
            cout << endl;
            cout << "\t Enter Name of the Student : ";
            cin >> name; //Taking Name of the Student as Input
            cout << "\t Enter Roll No. of the Student : ";
            cin >> roll; //Taking Roll No. of  the Student as Input
            total = 0;
            average = 0;
            for (i = 0; i < 5; i++)
            { //For loop to take Marks of 5 Subject as Input 
                cout << " Enter Marks of Subject " << i + 1 << " : ";
                cin >> mark[i]; //Statement to Take Marks in Subject as Input  
                total += mark[i]; //Finding Total Marks of 5 Subject for a Student 
            }
            cout << "\t Total Marks of Student : " << total; //Printing Total Marks of the Student
            average = total / 5; //Finding Average
            cout << "\n\t Average Marks of Student : " << average; //Printing Average of the Student
            cout << endl;
        }
    friend void calc(Stud *a, int n) //Function to Find Average of 'n' Students
    {
        float t = 0.0, to ,tavg; //Variable Declaration
        for (int i = 0; i < n; i++)
        { //For loop to Find Average of 'n' Students 
            t = t + a[i].average; //Variable to Find Total Average  of ‘n’ Students
            to = to + a[i].total; //Variable to Find Total Marks of ‘n’ Students
        }
        tavg = to / n; //Variable to Find Average Total Marks of 'n' Student
        cout << "\n\n\t The Average Total Marks of the Class : " << tavg; //Printing Statement for Printing Average Total marks of 'n' Students
        Stud::avg = t / n; //Finding Average of 'n' Students
        cout << "\n\t The Average of the Class : " << Stud::avg; //Printing Statement for Printing Average of 'n' Students
    }
};
float Stud::avg;
//Driver Code
int main()
{ //Start of Main Function
    Stud s[10]; //Object Creation
    int n; //Variable Declaration
    cout << " Enter Number of Students : ";
    cin >> n; //Taking No. of Students as Input
    for (int i = 0; i < n; i++)
    { //For loop to Take Details of 'n' Students 
        cout << endl;
        cout << "\t\t Enter Details Of Student " << i + 1 << " : ";
        s[i].getData();
    }
    calc(s, n);
    return 0;
} //End of Main Function