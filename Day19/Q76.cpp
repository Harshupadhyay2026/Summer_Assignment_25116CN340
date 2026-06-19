// Diagonal Sum
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,s=0;
cin>>n;
int a[n][n];
for(i=0;i<n;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
for(i=0;i<n;i++)
s=s+a[i][i];
cout<<s;
getch();
}