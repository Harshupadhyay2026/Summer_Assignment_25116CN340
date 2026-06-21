// Reverse String
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char s[100];
int i=0;
cin.getline(s,100);
while(s[i]!='\0')
i++;
for(i=i-1;i>=0;i--)
cout<<s[i];
getch();
}