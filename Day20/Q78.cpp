// Check Symmetric Matrix
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,f=1;
cin>>n;
int a[n][n];
for(i=0;i<n;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]!=a[j][i])
{
f=0;
break;
}
}
}
if(f==1)
cout<<"Symmetric Matrix";
else
cout<<"Not Symmetric Matrix";
getch();
}