#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
clrscr();
for(i=1;i<=5;i++)
{
  for(j=1;j<=i;j++)
  {
   printf(" ");
  }
   for(s=i;s<=5;s++)
   {
    printf("%d",s);
   }
 printf("\n");
}
getch();
}