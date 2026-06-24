// Compress String
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char s[100];
int i,j,c;
cin.getline(s,100);
for(i=0;s[i]!='\0';i=j)
{
c=1;
j=i+1;
while(s[i]==s[j])
{
c++;
j++;
}
cout<<s[i]<<c;
}
getch();
}