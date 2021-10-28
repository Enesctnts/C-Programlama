#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>

/* klavyeden girilen  4 sayının toplamını alan program */

int main()
{
    int i,toplam=0,sayi;

    for(i=0;i<4;i++)
    {
        printf("%d. sayiyi giriniz= ",i+1);
        scanf("%d",&sayi);
        toplam+=sayi;
    }
    printf("\nToplam= %d",toplam);

    
    getch();
    return 0;
} 
