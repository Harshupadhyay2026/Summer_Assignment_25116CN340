// Maximum Occurring Character
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char s[100],ch;
int i,j,c,m=0;
cin.getline(s,100);
for(i=0;s[i]!='\0';i++)
{
c=0;
for(j=0;s[j]!='\0';j++)
{
if(s[i]==s[j])
c++;
}
if(c>m)
{
m=c;
ch=s[i];
}
}
cout<<ch;
getch();
}