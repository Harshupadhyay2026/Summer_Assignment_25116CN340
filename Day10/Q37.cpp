//To print star pyramid
#include<iostream>
using namespace std;
int main()
{
int totalRows=5;
for(int row=1;row<=totalRows;row++)
{
for(int space=1;space<=totalRows-row;space++)
cout<<" ";
for(int star=1;star<=(2*row-1);star++)
cout<<"*";
cout<<endl;
}
return 0;
}