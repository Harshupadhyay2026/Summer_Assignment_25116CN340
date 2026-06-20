// Row Wise Sum
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int r,c,i,j,s;
cin>>r>>c;
int a[r][c];
for(i=0;i<r;i++)
for(j=0;j<c;j++)
cin>>a[i][j];
for(i=0;i<r;i++)
{
s=0;
for(j=0;j<c;j++)
s=s+a[i][j];
cout<<s<<" ";
}
getch();
}