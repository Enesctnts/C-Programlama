#include<stdio.h>
#include <conio.h>

/* girilen sayının en büyüğünü bulan progrem */

int main() 
{
	int sayi1,sayi2,sayi3;
	printf("1. sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("2. sayiyi giriniz:");
	scanf("%d",&sayi2);
	printf("3. sayiyi giriniz:");
	scanf("%d",&sayi3);
	
	if(sayi1>sayi2 && sayi1>sayi3)
	{
		printf("%d en buyuk sayidir.",sayi1);
	}		
	else if(sayi2==sayi3 && sayi2>sayi1)
		{
		printf("En buyuk sayilar %d ve %d'tur.",sayi2,sayi3);
		}
	
	else if(sayi1==sayi3 && sayi1>sayi2)
		{
		printf("En buyuk sayilar %d ve %d'tur.",sayi1,sayi3);
		}
	else if(sayi1==sayi2 && sayi1>sayi3)
		{
		printf("En buyuk sayilar %d ve %d'dir.",sayi1,sayi2);
		}
	else if(sayi2>sayi1 && sayi2>sayi3)
	{
		printf("%d en buyuk sayidir",sayi2);
	}
	else if(sayi3>sayi1 && sayi3>sayi2)
	{
		printf("%d en buyuk sayidir.",sayi3);
	}
	
	else 
	{
		printf("Sayiler esittir.");
	}
	getch();
	return 0;
}