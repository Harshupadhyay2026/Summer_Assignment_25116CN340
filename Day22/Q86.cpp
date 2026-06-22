// Count Words
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char s[100];
int i=0,c=1;
cin.getline(s,100);
while(s[i]!='\0')
{
if(s[i]==' ')
c++;
i++;
}
cout<<c;
getch();
}