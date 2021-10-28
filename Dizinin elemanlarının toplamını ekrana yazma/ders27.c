#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
//2. Bir dizinin elemanlarının toplamını ekrana yazan C programı kodu yazınız

int main()
{
    int i,toplam=0,dizi_uzunlugu,n;
    
    printf("\nDizi uzunlugunu giriniz:");
    scanf("%d",&dizi_uzunlugu);
    
    n = dizi_uzunlugu;

    int dizi[n];
    while(n>0)
    {
    printf("%d.sayiyi giriniz:",i+1);
    scanf("%d",&dizi[i]);
    toplam+=dizi[i];
    i++;
    n--;
    }   
    printf("\n****************\n");
    printf("\nToplam:%d",toplam);

    getch();
    return 0;
}