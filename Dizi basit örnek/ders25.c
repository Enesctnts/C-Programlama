#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
//Örnek: 10 elemanlı dizi elemanlar programın içinde giriliyor (0. Eleman yazdırılıyor)
int main()
{
int sayi[10];
int i;

for(i=1;i<=10;i++)
{
    printf("%d.sayiyi giriniz:",i);
    scanf("%d",&sayi[i]);
}

printf("\n Girilen sayi=%d",sayi[1]);




getch();
return 0;
}