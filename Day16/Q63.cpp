// Pair With Given Sum
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,s,f=0;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
cin>>s;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]+a[j]==s)
{
cout<<a[i]<<" "<<a[j];
f=1;
break;
}
}
if(f==1)
break;
}
if(f==0)
cout<<"No Pair";
getch();
}