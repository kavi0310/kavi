#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,f=0,c=0,m=0;
clrscr();
printf("enter:\n");
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
c++;
}
//printf("c=%d\n",c);
if(a[0]>=65&&a[0]<=90)
{
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
if(a[i+1]>=65&&a[i+1]<=90)
{
f=1;
m++;
}
}
}
}
//printf("m=%d\n",m);
if(c==m)
printf("yes");
if(f==0)
printf("no");
getch();
}

