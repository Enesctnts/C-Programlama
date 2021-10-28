#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>
//4. Kullanıcıdan alınan dizi elemanlarının tekrar  sayılarını ekrana yazan C kodu yazınız.

int main()
{
    int i,j,dizi_uzunlugu,n;
    printf("\nDizinin uzunlugunu giriniz:");
    scanf("%d",&dizi_uzunlugu);
    
    n=dizi_uzunlugu;
    int dizi[n];
    int kopya_dizi[n];
    int TekrarElemanSayisi[n];
    while (n>0)
    {
            printf("%d. elemani giriniz:",i+1);
            scanf("%d",&dizi[i]);
            i++;
            n--;
    }
    for(i=0;i<dizi_uzunlugu;i++)
    {
        kopya_dizi[i]=dizi[i];
        TekrarElemanSayisi[i]=1;
    }
    for(i=0;i<dizi_uzunlugu;i++)
    {
        for(j=0;j<dizi_uzunlugu;j++)
        {
            if(i != j)
            {
                if(dizi[i]==kopya_dizi[j])
                {
                    TekrarElemanSayisi[i]=TekrarElemanSayisi[i]+1;
                }
            }
        }
    }
    for(i=0;i<dizi_uzunlugu;i++)
    {
        printf("%d. elemanin tekrar sayisi: %d\n",dizi[i],TekrarElemanSayisi[i]);
    }
    getch();
    return 0;
}