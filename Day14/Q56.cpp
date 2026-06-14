// Write a program to Find Duplicates in Array
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
cout<<"Duplicate Elements:\n";
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
cout<<a[i]<<endl;
break;
}
}
}
return 0;
}