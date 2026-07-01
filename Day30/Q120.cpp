// Mini Project
#include<iostream.h>
#include<conio.h>
void show(int r[],char n[][30])
{
int i;
cout<<"\nStudent Records\n";
for(i=0;i<3;i++)
cout<<r[i]<<" "<<n[i]<<endl;
}
void main()
{
clrscr();
int r[3],i;
char n[3][30];
for(i=0;i<3;i++)
{
cout<<"Enter Roll : ";
cin>>r[i];
cout<<"Enter Name : ";
cin>>n[i];
}
show(r,n);
getch();
}