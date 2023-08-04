#include<stdio.h>
#include<conio.h>
int main()
{
    int i,s,j;
    clrscr();
    for(i=1; i<=5; i++)
    {
        for(s=1; s<=6-i; s++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
}