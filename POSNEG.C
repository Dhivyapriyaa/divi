#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the number");
scanf("%d", &n);
if(n > 0)
{
printf("positive");
}
else if(n < 0)
{
printf("negative");
}
else
{
printf("zero");
}
getch();
}