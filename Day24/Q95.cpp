// Longest Word
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char s[100];
int i=0,c=0,m=0,e=0,p=0;
cin.getline(s,100);
while(1)
{
if(s[i]!=' '&&s[i]!='\0')
c++;
else
{
if(c>m)
{
m=c;
e=i-1;
}
c=0;
}
if(s[i]=='\0')
break;
i++;
}
p=e-m+1;
for(i=p;i<=e;i++)
cout<<s[i];
getch();
}