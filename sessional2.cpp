#include <iostream>
#include <string>
using namespace std;

class a1
{
    string firstname;

public:
    void set(string name)
    {
        firstname = name;
    }
    string get()
    {
        return firstname;
    }
};

class a2
{
    string surname;

public:
    void set(string name)
    {
        surname = name;
    }
    string get()
    {
        return surname;
    }
};

class a3
{
    string fullname;

public:
    void display()
    {
        cout << fullname;
    }
    void set(string name)
    {
        fullname = name;
    }
};

int main()
{
    a1 a;
    a2 b;
    a.set("Sahil");
    b.set("Gupta");
    string full = a.get() + " " + b.get();
    a3 c;
    c.set(full);
    c.display();
}