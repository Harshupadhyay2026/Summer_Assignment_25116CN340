// Common Characters
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char a[100],b[100];
int i,j;
cin.getline(a,100);
cin.getline(b,100);
for(i=0;a[i]!='\0';i++)
{
for(j=0;b[j]!='\0';j++)
{
if(a[i]==b[j])
{
cout<<a[i]<<" ";
break;
}
}
}
getch();
}