#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],b[10];
int i,j;
clrscr();
printf("enter two strings:\n");
scanf("%s %s",&a,&b);
for(i=0;a[i]!='\0';i++)
{
for(j=0;b[j]!='\0';j++)
{
if(a[i]==b[j])
{
b[j]='$';
printf("%c",a[i]);
}
}
}
getch();
}

