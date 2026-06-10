#include <iostream>
using namespace std;
int main()
{ 
int n,sum= 0;
cout<<"enter till number you want to sum";
cin>>n;
for (int i =1;i<=n;i++ )
{
  sum=sum+i;
}
cout<< "sum of this term is "<< sum;
return 0;
}