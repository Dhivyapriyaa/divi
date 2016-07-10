#include<stdio.h>
#include<conio.h>
int main()
{
int n;
int temp=0;
int i=0;
clrscr();
printf("enter a number:");
scanf("%d",&n);
temp=n;
while(temp>0)
{
temp=temp/10;
i++;
}
printf("\n%d",i);
getch();
return 0;
}