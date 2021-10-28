#include<stdio.h>
#include<stdio.h>
#include<conio.h>


int main()
{
int dizi[100];
int i,sayi;

printf("Eleman sayisini giriniz:");
scanf("%d",&sayi);
for (i = 0; i < sayi; i++)

{
    printf("%d.sayiyi giriniz:",i+1);
    scanf("%d",&dizi[i]);
}
for ( i = 0; i < sayi; i++)
{
    printf("%d ",dizi[i]);

}

getch();
return 0;
}