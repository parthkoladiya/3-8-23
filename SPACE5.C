#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,s;
  clrscr();
  for(i=1;i<=5;i++)
  {
    for(s=1;s<=6-i;s++)
    {
    printf(" ");
    }
    for(j=5;j>=6-i;j--)
    {
    printf("$");
    }
  printf("\n");
  }
  getch();
}