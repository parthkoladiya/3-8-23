#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,s;
  clrscr();
  for(r=1;r<=5;i++)
  {
    for(s=1;s<=i;s++)
    {
    printf(" ");
    }
    for(j=1;j<=i;j++)
    {
    printf("%d",j);
    }
    printf("\n");
  }
  getch();
}