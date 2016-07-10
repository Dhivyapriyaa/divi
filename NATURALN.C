#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0;
clrscr();
printf("enter a positive integer:");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
sum=sum+i;
}
printf("sum=%d",sum);
getch();
return 0;
}