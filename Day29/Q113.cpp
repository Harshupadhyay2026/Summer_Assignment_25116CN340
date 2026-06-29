// Menu Driven Calculator
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"1.Add"<<endl;
cout<<"2.Subtract"<<endl;
cout<<"3.Multiply"<<endl;
cout<<"4.Divide"<<endl;
cin>>c;
cin>>a>>b;
switch(c)
{
case 1: cout<<a+b;
break;
case 2: cout<<a-b;
break;
case 3: cout<<a*b;
break;
case 4: cout<<a/b;
break;
default: cout<<"Invalid Choice";
}
getch();
}