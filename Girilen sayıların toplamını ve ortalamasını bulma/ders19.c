#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

int dizi[10];
int i,sayi,toplam=0;

printf("Elaman sayisi:");
scanf("%d",&sayi);

for(i=0;i<sayi;i++)
{
    printf("%d.sayi degeri:",i+1);
    scanf("%d",&dizi[i]);

    toplam += dizi[i];
 

}

float ao = toplam/sayi;
printf(" toplam= %d AO = %.2f",toplam,ao);

getch();
return 0;
}