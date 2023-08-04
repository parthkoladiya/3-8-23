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
   for(s=1;s<=6-i;s++)
   {
   printf("$");
   }
   printf("\n");
}
getch();
}