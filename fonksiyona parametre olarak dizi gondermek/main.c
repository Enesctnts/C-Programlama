#include <stdio.h>
#include <stdlib.h>
#define NOTSAYISI 10
void kullanicidanNotlariOku(int[],int );
double ortalamaBul(int [],int);


int main()
{
    int notlar[NOTSAYISI];
    kullanicidanNotlariOku(notlar,NOTSAYISI);
    double ortalama=ortalamaBul(notlar,NOTSAYISI);

    printf("Girilen degerlerin ortalamasi=%.2f",ortalama);

    return 0;
}

void kullanicidanNotlariOku(int notlar[],int sayi)
{
    int i;
    for(i=0;i<sayi;i++)
    {
        printf("%d.sayiyi giriniz=",i+1);
        scanf("%d",&notlar[i]);
    }
}

double  ortalamaBul(int notlar[],int sayi)
{
    double toplam =0;
    int i;
    for(i=0;i<sayi;i++)
    {
        toplam=toplam+notlar[i];
    }

    return (double)toplam/(double)sayi;
}