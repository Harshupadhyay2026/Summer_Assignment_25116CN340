//To print character pyramid
#include<iostream>
using namespace std;
int main()
{
int totalRows=5;
for(int row=1;row<=totalRows;row++)
{
for(char character='A';character<'A'+row;character++)
cout<<character;
for(char character='A'+row-2;character>='A';character--)
cout<<character;
cout<<endl;
}
return 0;
}