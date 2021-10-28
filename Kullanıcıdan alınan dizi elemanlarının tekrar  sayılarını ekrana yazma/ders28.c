#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>
//3. Bir dizinin elemanlarını başka bir diziye kopyalayan C kodu yazınız.

int main()
{
    int i=0,n,dizi_uzunlugu;

    printf("\nDizi uzunlugunu giriniz:");
    scanf("%d",&dizi_uzunlugu);

    n=dizi_uzunlugu;
    int dizi[n];
    int kopya_dizi[n];
    
    while(n > 0)
    {
        printf("%d. elemani giriniz:",i+1);
        scanf("%d",&dizi[i]);
        
        i++;
        n--;
    }
   
    for(i=0;i<dizi_uzunlugu;i++)
    {
        kopya_dizi[i]=dizi[i];
    }
    printf("\n Kopya dizi icerigi \n");
    for(i=0;i<dizi_uzunlugu;i++)
    {
        printf("%d ",kopya_dizi[i]);
    }
    printf("\n");

    getch();
    return 0;
}