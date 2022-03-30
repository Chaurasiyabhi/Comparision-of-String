#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str1[20];
char str2[20];
int value;
clrscr();
 printf("We Have to compare the string");
printf("\nEnter the First String");
scanf("%s",&str1);
printf("Enter the second Sting");
scanf("%s",&str2);
value=strcmp(str1,str2);
if(value==0)
printf("strings are same");
else
printf("strings are not same");
getch();
}