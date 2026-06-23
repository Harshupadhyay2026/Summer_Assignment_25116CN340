// First Non Repeating Character
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char s[100];
int i,j,c;
cin.getline(s,100);
for(i=0;s[i]!='\0';i++)
{
c=0;
for(j=0;s[j]!='\0';j++)
{
if(s[i]==s[j])
c++;
}
if(c==1)
{
cout<<s[i];
break;
}
}
getch();
}