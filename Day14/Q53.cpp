// Write a program to Linear Search.
#include <iostream>
using namespace std;
int main()
{
int n,x,p=-1;
cout<<"Enter size: ";
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Enter element: ";
cin>>x;
for(int i=0;i<n;i++)
{
if(a[i]==x)
{
p=i+1;
break;
}
}
if(p==-1)
cout<<"Element not found";
else
cout<<"Element found at position "<<p;
return 0;
}