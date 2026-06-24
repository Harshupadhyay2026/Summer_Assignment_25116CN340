// Remove Duplicate Characters
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char s[100];
int i,j,f;
cin.getline(s,100);
for(i=0;s[i]!='\0';i++)
{
f=0;
for(j=0;j<i;j++)
{
if(s[i]==s[j])
{
f=1;
break;
}
}
if(f==0)
cout<<s[i];
}
getch();
}