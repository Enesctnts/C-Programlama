#include<stdio.h>
#include<conio.h>
/* girilen sayının tek mi çift mi olduğunu bulan program */

int main() 
{
	int x;
	
	printf("Sayiyi giriniz:");
	scanf("%d",&x);

	if(x%2==0)
	{
		printf("Girilen sayi cifttir.\n",x);
	}
	else
	{
	printf("Girilen sayi tektir.\n",x);
	}
	getch();
	return 0;
}