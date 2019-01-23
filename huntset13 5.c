#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("enter n:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
printf("1");
}
printf("\n");
}
getch();
}
