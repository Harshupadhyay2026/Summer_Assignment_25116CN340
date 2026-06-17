// Union Of Arrays
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,m,i,j,f;
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
{
f=0;
for(j=0;j<n;j++)
{
if(b[i]==a[j])
{
f=1;
break;
}
}
if(f==0)
cout<<b[i]<<" ";
}
getch();
}