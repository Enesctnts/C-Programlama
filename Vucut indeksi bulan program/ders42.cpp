#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

double celciushesapla (double km);
double fahrenheithesapla (double km_fahr);

int main()
{
    double derinlik;

    printf("Derinlik bilgisini giriniz (km): ");
    scanf("%lf",&derinlik);
    printf("Celcius cinsinden sicaklik degeri %.2f\n",celciushesapla(derinlik));
    printf("Fahrenheit cinsinden sicaklik degeri %.2f",fahrenheithesapla(derinlik));

    getch();
    return 0;
}

double celciushesapla (double km)
{
    double sicaklik = (10*km)+20;
    return (sicaklik);
}
double fahrenheithesapla (double km_fahr)
{
    return ((1.8*celciushesapla(km_fahr))+32);
}