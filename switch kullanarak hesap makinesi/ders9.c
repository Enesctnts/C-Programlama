#include<stdio.h>
#include<conio.h>

/* Senaryo: Kullanıcıdan alınan 2 sayıya yine kullanıcıdan alınacak değere göre dört işlem uygulayan C# programını yazınız. 
(Toplama için 1, Çıkartma için 2, Çarpma için 3, Bölme için 4 girilecek. Bu değerler dışındaki girişler için hatalı giriş yaptınız şeklinde uyarı verecek.) */

int main()
{
	int x,y,toplama,cikarma,bolme,carpma,islem;
	
	printf("1. sayiyi giriniz:");
	scanf("%d",&x);
	printf("2. sayiyi giriniz:");
	scanf("%d",&y);
	
	printf("Islemler\n1:toplama\n2:cikarma\n3:carpma\n4:bolme\n\n");
	printf("islemi seciniz:");
	scanf("%d",&islem);

	toplama=x+y;
	cikarma=x-y;
	carpma=x*y;
	bolme=x/y;
	
	switch(islem)
	{
		case 1:
		printf("Toplama islemi: %d",toplama);
		break;
		case 2:
		printf("Cikarma islemi: %d",cikarma);
		break;
		case 3:
		printf("Carpma islemi: %d",carpma);
		break;
		case 4:
		printf("Bolme islemi: %d",bolme);
		break;	
		default:
		printf("Bilinmeyen islem");
		break;
	}
	
	

			
	getch();
	return 0;
	}

	
	
	

