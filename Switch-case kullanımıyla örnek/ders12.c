#include<stdio.h>
#include<conio.h>

/*Örnek 3: Kullanıcının girmiş olduğu karaktere göre hangi kitap türünü seçtiğini bulan programı switch case ile yapın
Seçenekler
B-Bilgisayar
M-Matematik
T-Tarih
İ-İngilizce
*/
int main()
{

	char secim;
	printf("Harfi giriniz:");
	scanf("%c",&secim);

	switch(secim)
	{
			case'B':
			printf("Bilgasayar");
			break;
			case 'M':
			printf("Matematik");
			break;
			case 'T':
			printf("Tarih");
			break;
			case 'i':
			printf("Ingilizce");
			break;
			default:
			printf("Hatali giris yaptiniz");
			break;
		
	}
	
	
	getch();
	return 0;

}