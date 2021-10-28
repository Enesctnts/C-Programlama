/*

Örnek 4:Alışveriş tutarına göre aşağıda verilen tablodaki indirim miktarını uygulayan programı yapın..

Alışveriş Tutarı	İndirim	Ödenecek Tutar
1000 az	5%	?
1000 ile 10000 arası	8%	?
10000’den büyük	8.5%	? */
#include<stdio.h>
#include<conio.h>

int main()
{
	int tutar,indmik;
	printf("Tutari giriniz:");
	scanf("%d",&tutar);
	
	if(tutar<1000)
	{
		printf("Yapilan Alisveris miktari:%d\n",tutar);
		indmik=tutar*0.05;
		tutar=tutar*0.95;
		printf("indirimli Tutar:%d\n",tutar);
		printf("indirim miktari:%d\n",indmik);
	}
	else if(1000<=tutar<10000)
	{
		printf("Yapilan Alisveris miktari:%d\n",tutar);
		indmik=tutar*0.08;
		tutar=tutar*92/100.0;
		printf("indirimli Tutar:%d\n",tutar);
		printf("indirim miktari:%d\n",indmik);
		
	}
	else {
		printf("Yapilan Alisveris miktari:%d\n",tutar);
		indmik=tutar*0.085;
		tutar=tutar*91.5/100.0;
		printf("indirimli Tutar:%d/n",tutar);
		printf("indirim miktari:%d\n",indmik);
		}
		
	getch();
	return 0;
}