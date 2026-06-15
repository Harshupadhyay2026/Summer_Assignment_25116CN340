// Write a program to Move Zeroes to End.
#include <iostream>
using namespace std;
int main()
{
int n,k=0;
cout<<"Enter size: ";
cin>>n;
int a[n];
int b[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
{
if(a[i]!=0)
{
b[k]=a[i];
k++;
}
}
while(k<n)
{
b[k]=0;
k++;
}
cout<<"Array after Moving Zeroes: ";
for(int i=0;i<n;i++)
cout<<b[i]<<" ";
return 0;
}