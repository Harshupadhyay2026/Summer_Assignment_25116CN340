// Maximum Frequency Element
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,c,m=0,e;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
c=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j])
c++;
}
if(c>m)
{
m=c;
e=a[i];
}
}
cout<<e;
getch();
}