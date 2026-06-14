// Write a program to Frequency of an Element.
#include <iostream>
using namespace std;
int main()
{
int n,x,c=0;
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
c++;
}
cout<<"Frequency = "<<c;
return 0;
}