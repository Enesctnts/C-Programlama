#include<stdio.h>
#include<conio.h>

int main()
	{
	int sayi,faktor;
	faktor=1;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayi>0)
		{	
			faktor=faktor*sayi;
			printf("%d\n",sayi);
			sayi--;
		}
		printf("%d ",faktor);
        getch ();
		return 0;
	}