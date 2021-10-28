#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>
//6.Kullanıcımız, float tipinde 10 adet değer girsin. Önce bu değerlerin ortalaması bulunsun, 
//ardından kaç adet elemanın ortalamanın altında kaldığı ve kaç adet elemanın ortalamanın üstünde olduğu gösterilsin.

int main()
{
    int dizi[10];
    float ort;
    int i,j,toplam=0,ortalti=0,ortustu=0;

    for(i=1;i<=10;i++)
    {
        printf("%d. Degeri giriniz:",i);
        scanf("%d",&dizi[i]);
    }
    for(i=1;i<=10;i++)
    {
        printf("\nGirilen %d. sayi= %d",i,dizi[i]);
        toplam+=dizi[i];
    }

        printf("\n\nToplam: %d ",toplam);
        printf("\n\n");
        ort=toplam/10.0;
        printf("\nOrtalama: %.2f ",ort);
        printf("\n");

    for ( i = 1; i<=10; i++)
    {
        if(dizi[i]>ort)
        {
            ortustu++;
            
        }
        
        else if(dizi[i]<ort)
        {
            ortalti++;
            
        }
        
    }
    printf("\nOrtalamin uzerindeki deger: %d ",ortustu);
    printf("\n");

    printf("\nOrtalamanin altindaki deger:%d",ortalti);
    
        
       
    getch();
    return 0;
}