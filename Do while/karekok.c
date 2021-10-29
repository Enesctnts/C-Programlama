#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int sayi;

    do
    {
        printf("Karekokunu almak istediginiz sayiyi giriniz.\n"
               "Programdan cikmak icin 0 degerini giriniz.\n");
        scanf("%d",&sayi);
        double root= sqrt((double)sayi);
        printf("-----------------------------\n");
        printf("Girilen deger=%d\n",sayi);
        printf("karekoku=%.2f\n",root);
        printf("-----------------------------\n");
    }
    while(sayi!=0);

    return 0;
}