#include<stdio.h>
#include<conio.h>

/* 1-7 arasında girelen sayının gün karşılığını veren program.*/

int main()
{	
	int secim,pazartesi,sali,carsamba,persembe,cuma,cumartesi,pazar;

	printf("1 ile 7 arasinda deger girin:");
	scanf("%d",&secim);

	switch(secim)
	{
			case 1:
			printf("Pazartesi\n\t");
			break;
			case 2:
			printf("Sali\n\t");
			break;
			case 3:
			printf("carsamba\n\t");
			break;
			case 4:
			printf("persembe\n\t");
			break;
			case 5:
			printf("cuma\n\t");
			break;
			case 6:
			printf("cumartesi\n\t");
			break;
			case 7:
			printf("Pazar\n\t");
			break;
			default:
			printf("Hatali secim yaptiniz.");
			break;
			
	}
	
	getch();
	return 0;
}