//Program to define a class bank and perform certain tasks from Data Members and Members Functions 
#include<iostream>
using namespace std;
class bank //Creating Class
{
    char name[150];
    int accno;
    char type;
    float balance;
    float depos;
    float wd;
    public:
        void assign() //Member Function to Assign Values
        {
            cout<<" Enter the CUSTOMER'S NAME : ";
            cin>>name; //Taking Input
            cout<<" Enter the ACCOUNT NUMBER : ";
            cin>>accno;
            cout<<" Enter ACCOUNT TYPE (S -> for SAVINGS/ C -> for CURRENT) : ";
            cin>>type;
            cout<<" Enter the BALANCE (Minimum Balance = 1000) : ";
            cin>>balance;
        }
        void deposit() //Member Function to Deposit Money
        {
            cout<<" Enter the Amount to be Deposited : ";
            cin>>depos; //Taking Amount to be Deposited as Input
            balance+=depos; //Statement to Add the Deposited Amount to Balance
        }
        void withdraw() //Member Function to Withdraw Money
        {
            cout<<"\t Your CURRENT BALANCE is : "<<balance<<endl; //Statement to Print Current Balance
            cout<<"\t Minimum Account Balance (MAB) is Rs 1000/-"<<endl; 
            cout<<"\t Total Amount you can withdraw without breaching MAB : "<<balance-1000<<endl;
            cout<<" How much do you wish to withdraw ? ";
            cin>>wd; //Taking Amount to be Withdrawn as Input
            if(wd>balance) //If Condition if the Withdrawing Amount is more than Balance
                cout<<"\n\t INSUFFICIENT BALANCE!!! ";
            if(balance-wd<1000) //If Condition if the Withdrawing Amount Breaching the MAB
                cout<<"\n\t Breaching MAB!! Can't Withdraw.. ";
            else
            balance=balance-wd; //Statement to Deduct the Withdrawn Amount from Balance
            cout<<"\n\t NEW BALANCE is : "<<balance; //Printing Statement to print the New Balance
        }
        void display() //Member Function to Display Details
        {
            cout<<"\n\t DETAILS are as Follows : \n";
            cout<<" NAME : "<<name<<endl;
            cout<<" BALANCE : "<<balance<<endl;
        }
};
//Driver Code
int main()
{
    bank b; //Object Creation
    int choice; //Variable Declaration
    char ch;
    do 
    {
        cout<<"\n Choose among the Options : \n";
        cout<<"\n\t 1. ASSIGN \n\t 2. DEPOSIT \n\t 3. WITHDRAW \n\t 4. DISPLAY DETAILS \n\n";
        cout<<" Enter Your CHOICE : ";
        cin>>choice; //Taking User Choice as Input
        if(choice==1)
            b.assign();
        else if(choice==2)
            b.deposit();
        else if(choice==3)
            b.withdraw();
        else if (choice==4)
            b.display();
        else
            cout<<"\n\t INVALID ENTRY!! \n";
        cout<<"\n\t Do you wish to CONTINUE ? (Y/N) : ";
        cin>>ch; //Statement to take User's Wish to Continue the Program
    }while(ch=='y'||ch=='Y');
}