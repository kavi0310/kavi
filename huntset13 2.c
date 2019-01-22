#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i,j,l=0,c=0;
clrscr();
printf("enter 1st string\n");
scanf("%s",&a);
printf("enter 2nd string\n");
scanf("%s",&b);
for(j=0;b[j]!='\0';j++)
{
l++;
}
for(i=0;a[i]!='\0';i++)
{
for(j=0;b[j]!='\0';j++)
{
if(a[i]==b[j])
{
c++;
break;
}
}
}
if(l==c)
printf("yes");
else
printf("no");
getch();
}
