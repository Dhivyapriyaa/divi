#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("enter the number");
scanf("%d", &num);
if(num > 0)
{
printf("positive");
}
else if(num < 0)
{
printf("negative");
}
else
{
printf("zero");
}
getch();
}