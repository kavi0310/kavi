#include<stdio.h>
#include<conio.h>
void main()
{
char a[50],b[50];
int i,j,l=0,c=0,m=0,n,k;
clrscr();
printf("enter two strings:\n");
scanf("%s %s",&a,&b);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(j=0;b[j]!='\0';j++)
{
c++;
}
for(j=0;j<l;j++)
{
for(i=j;i<l;i++)
{
if(b[j]==a[i])
{
m++;
break;
}}}
if(m==l)
{
n=c-m;
k=n/m;
k=k+1;
printf("%d\n",k);
}
else
printf("invalid input");
getch();
}
