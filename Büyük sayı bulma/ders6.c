#include<stdio.h>
#include<conio.h>

int main () 
{
	int x;
	int y;
	
	printf("x sayisini giriniz:");
	scanf("%d",&x);
	printf("y sayisini giriniz:");
	scanf("%d",&y);
	
		
	if(x==y)
	
		printf("x ve y Sayilar esittir.");
		
	
	else if(x>y)
	
		printf("Buyuk olan sayi %d'dir.",x);
	
	else 
	
	printf("Buyuk olan sayi %d'dir",y);
	
	getch();
	return 0;
}