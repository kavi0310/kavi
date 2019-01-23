#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],k=0,i,j,n,c=0,l=0,m;
clrscr();
printf("enter n:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
c=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j])
{
c++;
}
}
if(c!=1)
{
k=c;
if(k>l)
{
l=k;
m=a[i];
}
}
}
printf("%d\n",m);
getch();
}
