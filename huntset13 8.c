#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i,j=0,l=0,c=0;
clrscr();
printf("enter string:\n");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
printf("l=%d\n",l);
for(i=l-1;i>=0;i--)
{
b[j]=a[i];
j++;
}
printf("%s\n",b);
for(i=0;i<l;i++)
{
for(j=0;j<l;j++)
{
if(a[i]==b[j])
{
c++;
break;
}
}
}
//printf("c=%d\n",c);
if(l==c)
printf("%s",b);
getch();
}




