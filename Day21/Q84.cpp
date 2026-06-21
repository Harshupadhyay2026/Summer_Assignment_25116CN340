// Lowercase To Uppercase
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char s[100];
int i=0;
cin.getline(s,100);
while(s[i]!='\0')
{
if(s[i]>='a'&&s[i]<='z')
s[i]=s[i]-32;
i++;
}
cout<<s;
getch();
}