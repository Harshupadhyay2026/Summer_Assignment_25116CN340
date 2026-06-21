// Count Vowels And Consonants
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char s[100];
int i=0,v=0,c=0;
cin.getline(s,100);
while(s[i]!='\0')
{
if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
v++;
else
c++;
}
i++;
}
cout<<"Vowels = "<<v<<endl;
cout<<"Consonants = "<<c;
getch();
}