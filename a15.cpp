#include <iostream>
using namespace std;
class publication
{
protected:
    float price;
    char title[40];

public:
    void input()
    {
        cout << "\n Enter TITLE of the Book : ";
        cin >> title;
        cout << " Enter PRICE of the Book : ";
        cin >> price;
    }
};
class book : protected publication
{
    int no_pages;

public:
    void input()
    {
        publication::input();
        cout << " Enter No. of Pages in the Book : ";
        cin >> no_pages;
    }
    void output()
    {
        cout << "\n\t DETAILS OF BOOK : \n";
        cout << " TITLE of the Book : " << title << endl;
        cout << " PRICE of the Book : " << price << endl;
        cout << " NO. OF PAGES of the Book : " << no_pages << endl;
    }
};
class lecture : protected publication
{
    int playtime;

public:
    void input()
    {
        publication::input();
        cout << " Enter the PLAYTIME : ";
        cin >> playtime;
    }
    void output()
    {
        cout << "\n\t DETAILS OF BOOK : \n";
        cout << " TITLE of the Book : " << title << endl;
        cout << " PRICE of the Book : " << price << endl;
        cout << " PLAYTIME of the Book : " << playtime << endl;
    }
};
int main()
{
    book b;
    lecture l;
    b.input();
    b.output();
    l.input();
    l.output();
    return 0;
}