// Write a program to Rotate Array Left.
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
int t=a[0];
for(int i=0;i<n-1;i++)
a[i]=a[i+1];
a[n-1]=t;
cout<<"Array after Left Rotation: ";
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;
}