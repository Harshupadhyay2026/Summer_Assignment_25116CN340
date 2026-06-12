//To write function for Armstrong
#include<iostream>
using namespace std;
int armstrong(int n)
{
int sum=0;
int temp=n;
int digit;
while(n!=0)
{
digit=n%10;
sum=sum+digit*digit*digit;
n=n/10;
}
if(sum==temp)
return 1;
else
return 0;
}
int main()
{
int n;
cout<<"Enter Number : ";
cin>>n;
if(armstrong(n))
cout<<"Armstrong Number";
else
cout<<"Not Armstrong Number";
return 0;
}