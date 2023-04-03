#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class Train
{
protected:
    int no_of_seats_1Tier = 50 + (rand() % 50);
    int no_of_seats_2Tier = 85 + (rand() % 50);
    int no_of_seats_3Tier = 115 + (rand() % 50);

public:
    void assign()
    {
        cout << " Total Number of Seats in Tier 1 : " << no_of_seats_1Tier << endl;
        cout << " Total Number of Seats in Tier 2 : " << no_of_seats_2Tier << endl;
        cout << " Total Number of Seats in Tier 3 : " << no_of_seats_3Tier << endl;
    }
};
class Reservation : public Train
{
protected:
    int choice;
    int num;

public:
    void display()
    {

        no_of_seats_1Tier -= (rand() % 25);
        no_of_seats_2Tier -= (rand() % 25);
        no_of_seats_3Tier -= (rand() % 25);
        cout << "\n Seats Available in Tier 1 : " << no_of_seats_1Tier;
        cout << "\n Seats Available in Tier 2 : " << no_of_seats_2Tier;
        cout << "\n Seats Available in Tier 3 : " << no_of_seats_3Tier;
    }
    void book()
    {
        cout << "\n Enter the Tier in which you wish to Book Seats : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << " Enter the Number of Seats to be Booked : ";
            cin >> num;
            no_of_seats_1Tier -= num;
            cout << "\n Seats of Tier 1 Available now : " << no_of_seats_1Tier;
            break;

        case 2:
            cout << " Enter the Number of Seats to be Booked : ";
            cin >> num;
            no_of_seats_2Tier -= num;
            cout << "\n Seats of Tier 2 Available now : " << no_of_seats_2Tier;
            break;

        case 3:
            cout << " Enter the Number of Seats to be Booked : ";
            cin >> num;
            no_of_seats_3Tier -= num;
            cout << "\n Seats of Tier 3 Available now : " << no_of_seats_3Tier;
            break;
        default:
            exit(0);
        }
    }
    void cancel()
    {
        int x;
        cout << "\n You have Currently Booked " << num << " Ticket(s). ";
        cout << "\n Press 1 to Cancel your Booking : ";
        cin >> x;
        if (x == 1)
        {
            cout << "\t BOOKING CANCELLED...";
        }
        else
            cout << "\t BOOKING NOT CANCELLED...";
    }
    void status()
    {
        srand(time(0));
        int q;
        q = rand() % 2;
        if (q == 0)
        {
            cout << "\t BOOKING PENDING...";
        }
        else if (q == 1)
        {
            cout << "\t BOOKING CONFIRMED...";
        }
        else
        {
            cout << "\t BOOKING BEING PROCCESSED...";
        }
    }
};
int main()
{
    Reservation r;
    r.assign();
    int choice;
    char ch = 'y';
    cout << "\n 1 -> DISPLAY AVAILABLE SEATS\n 2 -> SEAT BOOKING\n 3 -> CANCEL BOOKING\n 4 -> CHECK STATUS\n 0 -> EXIT\n";
    while (ch == 'y' || ch == 'Y')
    {
        cout << "\n\n Enter Your Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            r.display();
            break;
        case 2:
            r.book();
            break;
        case 3:
            r.cancel();
            break;
        case 4:
            r.status();
            break;
        case 0:
            exit(0);
        default:
            exit(0);
        }
    }
}