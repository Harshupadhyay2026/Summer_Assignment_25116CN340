// Q43 - Check Prime Number
#include<iostream>
using namespace std;
bool prime(int n)
{
if(n<=1)
return false;
for(int i=2;i<n;i++)
{
if(n%i==0)
return false;
}
return true;
}
int main()
{
int n;
cout<<"Enter number: ";
cin>>n;
if(prime(n))
cout<<"Prime Number";
else
cout<<"Not Prime Number";
return 0;
}