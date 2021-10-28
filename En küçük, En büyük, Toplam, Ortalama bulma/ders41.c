#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{   
    int sayi,numara,sayac=1,toplam=0;
    float ortalama=0;
    int en_kucuk;
    int en_buyuk;

    printf("Kac sayi girmek istiyorsunuz: ");
    scanf("%d",&numara);

    printf("\n1. sayiyi giriniz: ");
    scanf("%d",&sayi);
    en_kucuk=sayi;
    en_buyuk=sayi;

    while (sayac<=numara)
    {
        toplam+=sayi;
        ortalama=toplam/numara;

    if(sayi<en_kucuk)
    {
        en_kucuk=sayi;
    }
    if(sayi>en_buyuk)
    {
        en_buyuk=sayi;
    }
   

        if (sayac<numara)
        {
            printf("%d",sayac+1);
            printf(". sayiyi giriniz: ");
            scanf("%d",&sayi);
        } 
        else 
        {
            printf("\nTesekkur Ederim..\n");
        }
        sayac++;
    }
   
    
    printf("\n\nEn kucuk sayi: %d",en_kucuk);
    printf("\n\nEn buyuk sayi: %d",en_buyuk);
    printf("\nToplam: %d",toplam);
    printf("\n\nOrtalama: %.2f",ortalama);

   
    getch();
    return 0;
    
}