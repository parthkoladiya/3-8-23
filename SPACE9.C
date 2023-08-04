#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s,n;
clrscr();
for(i=1;i<=5;i++)
{
 n=i%2==0?-1:1;
 for(j=6-i;j>=1;j--)
 {
   printf(" ");
 }
 for(s=1;s<=i;s++)
 {
 printf("%d",s);
 n=-n;
 }
 printf("\n");
}
getch();
}