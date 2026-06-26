// Quiz Application
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char a;
int s=0;
cout<<"Q1. Capital of India?"<<endl;
cout<<"a) Delhi"<<endl;
cout<<"b) Mumbai"<<endl;
cin>>a;
if(a=='a'||a=='A')
s++;
cout<<"Q2. 5 + 5 = ?"<<endl;
cout<<"a) 10"<<endl;
cout<<"b) 12"<<endl;
cin>>a;
if(a=='a'||a=='A')
s++;
cout<<"Score = "<<s;
getch();
}