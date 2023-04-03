#include<iostream>
using namespace std;
class B;
class C;
class A
{
    int a[5];
    friend C sum(A&,B&,C&);
    public:
        void input()
        {
            int i;
            cout<<"\t Enter 5 Numbers : \n";
            for(i=0;i<5;i++)
            {
                cout<<" Enter Value of a["<<i<<"] : ";
                cin>>a[i];
            }
        }
};
class B
{
    int b[5];
    friend C sum(A&,B&,C&);
    public:
        void input()
        {
            int i;
            cout<<"\t Enter 5 Numbers : \n";
            for(i=0;i<5;i++)
            {
                cout<<" Enter Value of b["<<i<<"] : ";
                cin>>b[i];
            }
        }
};
class C
{
    int c[5];
    friend C sum(A&,B&,C&);
    public:
        void output()
        {
            int i;
            cout<<"\t Array After ADDITION : ";
            for(i=0;i<5;i++)
                cout<<c[i]<<"\t";
            cout<<endl;
        }
};
C sum(A& a1, B& b1,C& c1)
{
    int i;
    for(i=0;i<5;i++)
        c1.c[i]=a1.a[i]+b1.b[i];
    return c1;
}
int main()
{
    A a;
    B b;
    C c;
    a.input();
    b.input();
    c=sum(a,b,c);
    c.output();
    return 0;
}