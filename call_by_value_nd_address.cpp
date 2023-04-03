#include<iostream>
using namespace std;
void swap(int a,int b) //Call by Value // a=5, b=10
{
    int temp=a; //temp=5, a=5
    a=b; //a=10
    b=temp;
    cout<<"a="<<a<<"   b="<<b<<endl;
}
void swapv(int *a,int *b) //Call by address
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int p,q;
    cin>>p>>q;  //p=5, q=10
    swap(p,q); //Call by Value
    cout<<p<<" "<<q<<endl;
    swapv(&p,&q); //Call by address
    cout<<p<<" "<<q<<endl;
    return 0;
}