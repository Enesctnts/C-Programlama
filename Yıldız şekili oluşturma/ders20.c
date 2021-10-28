#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main()
{

    int i,j,sayi,sayi1;

    printf("Yildizlar kac satir  olsun:");
    scanf("%d",&sayi);
    printf("Yildizlar kac sutun  olsun:");
    scanf("%d",&sayi1);

    for ( i = 0;i<sayi1; i++)
    {
        for (j = 0;j<sayi; j++)
        {
            printf("*");
            
        }
        printf("\n\n");
    }
    
    
    getch ();
    return 0;
}  