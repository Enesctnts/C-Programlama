#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>

/* klavyeden girilen sayının karesini alan program */

int main()
{
    int i,j;
   
    for(i=0;i<=5;i++)
    {
        j=pow(2,i);
         printf("%d\n",j);
         
    }
    
    getch();
    return 0;
} 
