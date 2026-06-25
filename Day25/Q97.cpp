// Merge Two Sorted Arrays
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,m,i=0,j=0;
cin>>n;
int a[n];
for(int x=0;x<n;x++)
cin>>a[x];
cin>>m;
int b[m];
for(int x=0;x<m;x++)
cin>>b[x];
while(i<n && j<m)
{
if(a[i]<b[j])
cout<<a[i++]<<" ";
else
cout<<b[j++]<<" ";
}
while(i<n)
cout<<a[i++]<<" ";
while(j<m)
cout<<b[j++]<<" ";
getch();
}