//To write function for pelindrome 
#include<iostream>
using namespace std;
int palindrome(int n)
{
int rev=0;
int temp=n;
while(n!=0)
{
rev=rev*10+n%10;
n=n/10;
}
if(temp==rev)
return 1;
else
return 0;
}
int main()
{
int n;
cout<<"Enter Number : ";
cin>>n;
if(palindrome(n))
cout<<"Palindrome Number";
else
cout<<"Not Palindrome Number";
return 0;
}