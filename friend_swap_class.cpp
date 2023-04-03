#include<iostream>
using namespace std;
class B; 
class A
{
    int x;
    public:
        void output()
        {
            cout<<"\n"<<x<<"\t";
        }
        void input(int p)
        {
            x=p;
            cout<<" x = "<<x;
        }
    friend void swap(A&,B&);
};
class B
{
    int y;
    public:
        void output()
        {
            cout<<y;
        }
        void input(int q)
        {
            y=q;
            cout<<" y = "<<y;
        }
    friend void swap(A& ,B&);
};
void swap(A&m,B&n)
{
    int temp=m.x;
    m.x=n.y;
    n.y=temp;
}
int main()
{
    A ob1;
    B ob2;
    ob1.input(5);
    ob2.input(6);
    swap(ob1,ob2);
    ob1.output();
    ob2.output();
}