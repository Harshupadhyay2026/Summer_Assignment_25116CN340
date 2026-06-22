// Character Frequency
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char s[100],ch;
int i=0,c=0;
cin.getline(s,100);
cin>>ch;
while(s[i]!='\0')
{
if(s[i]==ch)
c++;
i++;
}
cout<<c;
getch();
}