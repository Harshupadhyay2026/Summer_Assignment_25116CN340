// Missing Number
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,s=0,i,m;
cin>>n;
int a[n-1];
for(i=0;i<n-1;i++)
{
cin>>a[i];
s=s+a[i];
}
m=(n*(n+1))/2-s;
cout<<m;
getch();
}