#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
            
        }
        printf("\n");
    }   
     for(i=4;i>=1;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }   
   
   
    getch();
    return 0;
}