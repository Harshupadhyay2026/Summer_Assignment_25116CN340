// String Rotation
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[100],b[100],t[200];
cin.getline(a,100);
cin.getline(b,100);
strcpy(t,a);
strcat(t,a);
if(strstr(t,b))
cout<<"Rotation";
else
cout<<"Not Rotation";
getch();
}