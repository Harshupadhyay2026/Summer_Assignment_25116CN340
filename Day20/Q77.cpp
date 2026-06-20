// Multiply Matrices
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int r,c,i,j,k;
cin>>r>>c;
int a[r][c],b[r][c],m[r][c];
for(i=0;i<r;i++)
for(j=0;j<c;j++)
cin>>a[i][j];
for(i=0;i<r;i++)
for(j=0;j<c;j++)
cin>>b[i][j];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
m[i][j]=0;
for(k=0;k<c;k++)
m[i][j]=m[i][j]+a[i][k]*b[k][j];
cout<<m[i][j]<<" ";
}
cout<<endl;
}
getch();
}