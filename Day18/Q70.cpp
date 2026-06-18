// Selection Sort
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,m,t;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
{
m=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[m])
m=j;
}
t=a[i];
a[i]=a[m];
a[m]=t;
}
for(i=0;i<n;i++)
cout<<a[i]<<" ";
getch();
}