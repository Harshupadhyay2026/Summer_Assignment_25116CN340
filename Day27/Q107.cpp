// Salary Management
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float b,h,d,t;
cout<<"Enter Basic Salary : ";
cin>>b;
h=b*20/100;
d=b*10/100;
t=b+h+d;
cout<<"HRA : "<<h<<endl;
cout<<"DA : "<<d<<endl;
cout<<"Total Salary : "<<t;
getch();
}