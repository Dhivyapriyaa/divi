#include<stdio.h>
int main()
{
char C;
int isLowercaseVowel, isUppercaseVowel;
clrscr();
printf("enter an alphabet:");
scanf("%c", &C);
isLowercaseVowel = (C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u');
isUppercaseVowel = (C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U');
if(isLowercaseVowel || isUppercaseVowel)
{
printf(" %c is a vowel", C);
}
else
{
printf(" %c is a consonants", C);
}
getch();
return 0;
}
