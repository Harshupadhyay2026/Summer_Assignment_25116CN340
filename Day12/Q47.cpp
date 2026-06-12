//To write function for fibonacci series 
#include<iostream>
using namespace std;
void fibonacci(int n)
{
int a=0;
int b=1;
int c;
for(int i=1;i<=n;i++)
{
cout<<a<<" ";
c=a+b;
a=b;
b=c;
}
}
int main()
{
int n;
cout<<"Enter Terms : ";
cin>>n;
fibonacci(n);
return 0;
}