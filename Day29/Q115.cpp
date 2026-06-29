// String Operations
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char s[100];
int i=0,c;
cin.getline(s,100);
cout<<"1.Length"<<endl;
cout<<"2.Display"<<endl;
cin>>c;
switch(c)
{
case 1:
while(s[i]!='\0')
i++;
cout<<i;
break;
case 2:
cout<<s;
break;
default:
cout<<"Invalid Choice";
}
getch();
}