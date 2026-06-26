// Number Guessing Game
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n=25,g;
do
{
cout<<"Enter Number : ";
cin>>g;
if(g>n)
cout<<"Too High"<<endl;
else if(g<n)
cout<<"Too Low"<<endl;
}while(g!=n);
cout<<"Correct Guess";
getch();
}