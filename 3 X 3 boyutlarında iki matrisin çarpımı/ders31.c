#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>
//6. 3 X 3 boyutlarında iki matrisin çarpımını hesaplayan C kodu yazınız.

int main()
{
    int matris_A[3][3];
    int matris_B[3][3];
    int matris_sonuc[3][3];
    int i,j;

    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A matrisinin degerlerini giriniz:");
            scanf("%d",&matris_A[i][j]);
        }
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("B matrisinin degerlerini giriniz:");
            scanf("%d",&matris_B[i][j]);
        }
        
    }
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\nMatris carpimi:%d ",matris_A[i][j] * matris_B[i][j]);
            
        }
        
    }

    printf("\n\n**********************\n\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nA matrisinin degerleri:%d ",matris_A[i][j]);
            
        }
        
    }    
    printf("\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            printf("\nB matrisinin degerleri:%d ",matris_B[i][j]);
        }
        
    }    
    getch();
    return 0;
}