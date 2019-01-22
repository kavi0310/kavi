#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int n,i,j,c;
clrscr();
printf("enter element:\n");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
c=0;
for(j=0;a[j]!='\0';j++)
{
if(a[i]==a[j])
c++;
}
if(c==1)
printf("%c",a[i]);
}
getch();
}
