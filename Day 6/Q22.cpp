// To Convert Binary to Decimal
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int dec=0;
int base=1;
while(n>0)
{
int digit=n%10;
dec=dec+(digit*base);
base=base*2;
n=n/10;
}
cout<<dec;
return 0;
}