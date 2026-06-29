// Array Operations
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,c,s=0;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
cout<<"1.Display"<<endl;
cout<<"2.Sum"<<endl;
cin>>c;
switch(c)
{
case 1:
for(i=0;i<n;i++)
cout<<a[i]<<" ";
break;
case 2:
for(i=0;i<n;i++)
s=s+a[i];
cout<<s;
break;
default:
cout<<"Invalid Choice";
}
getch();
}