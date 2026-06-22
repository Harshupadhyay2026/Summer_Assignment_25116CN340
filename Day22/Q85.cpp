// Palindrome String
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char s[100];
int i=0,l,f=1;
cin.getline(s,100);
while(s[i]!='\0')
i++;
l=i-1;
for(i=0;i<l;i++,l--)
{
if(s[i]!=s[l])
{
f=0;
break;
}
}
if(f==1)
cout<<"Palindrome";
else
cout<<"Not Palindrome";
getch();
}