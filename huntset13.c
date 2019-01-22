#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,n1=0,i,k=0,m=0;
clrscr();
printf("enter n:\n");
scanf("%d",&n);
printf("enter array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
if(n%2!=0)
{
n1=n/2;
}
for(i=0;i<n1;i++)
{
k=a[i]+a[i+1];
break;
}
for(i=n1+1;i<n;i++)
{
m=a[i]+a[i+1];
break;
}
if(k==m)
printf("yes");
else
printf("no");
getch();
}

