// Write a program to Reverse Array.
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
cout<<"Reversed Array: ";
for(int i=n-1;i>=0;i--)
cout<<a[i]<<" ";
return 0;
}