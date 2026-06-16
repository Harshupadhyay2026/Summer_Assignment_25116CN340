// Remove Duplicates From Array
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,f;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
f=0;
for(j=0;j<i;j++)
{
if(a[i]==a[j])
{
f=1;
break;
}
}
if(f==0)
cout<<a[i]<<" ";
}
getch();
}