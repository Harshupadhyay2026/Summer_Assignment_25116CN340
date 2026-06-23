// Check Anagram Strings
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char a[100],b[100];
int i=0,j,c1=0,c2=0,f=1;
cin.getline(a,100);
cin.getline(b,100);
while(a[c1]!='\0')
c1++;
while(b[c2]!='\0')
c2++;
if(c1!=c2)
f=0;
else
{
for(i=0;i<c1;i++)
{
int x=0,y=0;
for(j=0;j<c1;j++)
{
if(a[i]==a[j])
x++;
if(a[i]==b[j])
y++;
}
if(x!=y)
{
f=0;
break;
}
}
}
if(f==1)
cout<<"Anagram";
else
cout<<"Not Anagram";
getch();
}