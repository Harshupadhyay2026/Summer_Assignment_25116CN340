//To print reverse pyramid
#include<iostream>
using namespace std;
int main()
{
int totalRows=5;
for(int row=totalRows;row>=1;row--)
{
for(int space=1;space<=totalRows-row;space++)
cout<<" ";
for(int star=1;star<=(2*row-1);star++)
cout<<"*";
cout<<endl;
}
return 0;
}