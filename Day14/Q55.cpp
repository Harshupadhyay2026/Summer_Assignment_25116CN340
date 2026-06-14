// Write a program to Second Largest Element.
#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter size: ";
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int l=a[0];
int s=a[0];
for(int i=1;i<n;i++)
{
if(a[i]>l)
{
s=l;
l=a[i];
}
else if(a[i]>s && a[i]!=l)
{
s=a[i];
}
}
cout<<"Second Largest Element = "<<s;
return 0;
}