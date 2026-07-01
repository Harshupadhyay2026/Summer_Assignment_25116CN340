// Student Record System
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int r[5],i;
char n[5][30];
for(i=0;i<5;i++)
{
cout<<"Enter Roll : ";
cin>>r[i];
cout<<"Enter Name : ";
cin>>n[i];
}
cout<<"\nStudent Records\n";
for(i=0;i<5;i++)
{
cout<<r[i]<<" "<<n[i]<<endl;
}
getch();
}