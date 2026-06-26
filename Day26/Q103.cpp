// ATM Simulation
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int b=10000,c,a;
cout<<"1.Check Balance"<<endl;
cout<<"2.Deposit"<<endl;
cout<<"3.Withdraw"<<endl;
if(c==1)
cout<<"Balance = "<<b;
else if(c==2)
{
cin>>a;
b=b+a;
cout<<"Balance = "<<b;
}
else if(c==3)
{
cin>>a;
if(a<=b)
{
b=b-a;
cout<<"Balance = "<<b;
}
else
cout<<"Insufficient Balance";
}
else
cout<<"Invalid Choice";
getch();
}