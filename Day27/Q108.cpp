// Marksheet
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char n[30];
int a,b,c,t;
float p;
cout<<"Enter Name : ";
cin>>n;
cout<<"Enter Marks : ";
cin>>a>>b>>c;
t=a+b+c;
p=t/3.0;
cout<<"\nName : "<<n<<endl;
cout<<"Total : "<<t<<endl;
cout<<"Percentage : "<<p<<endl;
if(p>=40)
cout<<"Result : Pass";
else
cout<<"Result : Fail";
getch();
}