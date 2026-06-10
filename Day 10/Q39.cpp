//To print number pyramid
#include<iostream>
using namespace std;
int main()
{
int totalRows=5;
for(int row=1;row<=totalRows;row++)
{
for(int number=1;number<=row;number++)
cout<<number;
for(int number=row-1;number>=1;number--)
cout<<number;
cout<<endl;
}
return 0;
}