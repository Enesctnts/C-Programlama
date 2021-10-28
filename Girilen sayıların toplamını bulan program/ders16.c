#include<stdio.h>
#include<conio.h>
/*
int main()
{
	int i,sayi,toplam=0;
	
	printf("Sayi giriniz:"); 
	scanf("%d",&sayi);
	
	for(i=0;i<=sayi;i++)
	{
		toplam+=i;
	
	}
	printf("Sonuc=%d\n",toplam);
	return 0;	
}
*/
int main()
{
	int s1,s2;
	printf("1.sayiyi giriniz:"); scanf("%d",&s1);
	printf("2.sayiyi giriniz:"); scanf("%d",&s2);
	
	printf("toplam: %d",s1+s2);

	getch ();
	return 0;
}