// Merge Arrays
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,m,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
cin>>m;
int b[m];
for(i=0;i<m;i++)
cin>>b[i];
for(i=0;i<n;i++)
cout<<a[i]<<" ";
for(i=0;i<m;i++)
cout<<b[i]<<" ";
getch();
}