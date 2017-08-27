//program to check if the year entered by user is leap year or not
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int year;
 printf("Enter the year:");
 scanf("%d",&year);

 if (year%4==0)
 {
  printf("This is a leap year");
 }
 else
 {
  printf("This is not a leap year");
 }
getch();
}