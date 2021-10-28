#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
/*Örnek: C programı ile 10 elemanlı bir dizinin elamanlarının okutulup yazdırılması, toplam ve ortalamasının
hesaplatılması.*/

int main()
{

    int dizi[10];
    float ort,toplam=0;
    int i;

    for(i=1;i<=10;i++)
    {
    printf("%d.Sayiyi giriniz:",i);
    scanf("%d",&dizi[i]);
    toplam+=dizi[i];
    }
    printf("\n****************\n\n");
    for(i=1;i<=10;i++)
    {
        printf("Girilen sayilar=%d\n",dizi[i]);
    }
    ort=toplam/10;
    printf("Girilen sayilarin ortalamasi:%.2f",ort);
    getch();
    return 0;
    


}