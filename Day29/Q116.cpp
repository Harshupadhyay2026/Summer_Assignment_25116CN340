// Inventory Management
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int id,q;
char n[30];
float p;
cout<<"Enter Item ID : ";
cin>>id;
cout<<"Enter Item Name : ";
cin>>n;
cout<<"Enter Quantity : ";
cin>>q;
cout<<"Enter Price : ";
cin>>p;
cout<<"\nInventory Details"<<endl;
cout<<"ID : "<<id<<endl;
cout<<"Name : "<<n<<endl;
cout<<"Quantity : "<<q<<endl;
cout<<"Price : "<<p;
getch();
}