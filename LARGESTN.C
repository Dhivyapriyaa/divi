#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,n3;
clrscr();
printf("enter three number:");
scanf("%d %d %d", &n1,&n2,&n3);
if(n1 >= n2 && n1 >= n3)
printf(" %d is thelargest num",n1);
if(n2 >= n1 && n2 >= n3)
printf(" %d is thelargest num",n2);
if(n3 >= n1 && n3 >= n1)
printf(" %d is thelargest num",n3);
getch();
return 0;
}