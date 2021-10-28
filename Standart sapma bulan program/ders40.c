#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{   
    int sayi;
    double x[sayi],toplam=0,toplam_kare=0;
    float ort=0,st_sapma=0;
    int i;

    printf("Sayi adediniz giriniz.");
    scanf("%d",&sayi);
    printf("\n");
    for(i=0;i<sayi;++i)
    {
       printf("%d. sayiyi giriniz:",i+1);
       scanf("%lf",&x[i]);
    }
    for(i=0;i<sayi;++i)
    {
        toplam+=x[i];
        toplam_kare+=x[i]*x[i];
    }
    ort=toplam/sayi;
    st_sapma=sqrt(toplam_kare/sayi-ort*ort);
    printf("\nSayilarin ortalamasi: %.2f\n",ort);
    printf("\nSayilarin standart sapmasi: %.2f\n",st_sapma);

    printf("\nDegerler Taplosu\n");
    printf("\n");
    printf("\nindis      Deger        Fark\n\n");
    for ( i = 0; i < sayi; ++i)
    {
        printf("%3d%4c%9.2lf%4c%9.2f\n",i+1, " ", x[i], " ", x[i]-ort);
    }
    getch();
    return 0;
}