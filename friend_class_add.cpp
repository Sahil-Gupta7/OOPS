#include<iostream>
using namespace std;
class B;
class A
{
    private:
        int a;
    public:
        void read_A()
        {
            cout<<" Enter a Number : ";
            cin>>a; 
            cout<<"\t a = "<<a;
        }
    friend int sum(A x,B y);
};
class B
{
    private:
        int b;
    public:
        void read_B()
        {
            cout<<"\n Enter other Number : ";
            cin>>b;
            cout<<"\t b = "<<b;
        }
    friend int sum(A x,B y);
};
int sum(A x,B y)
{
    return(x.a+y.b);
}
int main()
{
    A ob1;
    B ob2;
    ob1.read_A();
    ob2.read_B(); 
    cout<<"\n SUM (a+b) : "<<sum(ob1,ob2);
    return 0;
}