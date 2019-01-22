#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i;
clrscr();
printf("enter a sentence:\n");
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
a[i]=a[i]-32;
break;
printf("%s",a);
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
a[i+1]=a[i+1]-32;
}
printf("%s",a);
getch();
}
