// Sort Names
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int n,i,j;
char s[20][50],t[50];
cin>>n;
cin.ignore();
for(i=0;i<n;i++)
cin.getline(s[i],50);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(strcmp(s[j],s[j+1])>0)
{
strcpy(t,s[j]);
strcpy(s[j],s[j+1]);
strcpy(s[j+1],t);
}
}
}
for(i=0;i<n;i++)
cout<<s[i]<<endl;
getch();
}