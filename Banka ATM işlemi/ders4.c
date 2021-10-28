#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/* banka para çekme işlemleri */

int main()
{
	int islem;
	int bakiye=1000;
	int tutar;

	printf("Islemler\n1:Para cekme\n2:Para yatirma\n3:Havale yapma\n4:Bakiye sorma\n5:Kart iade\n\n\n");

	printf("islemi seciniz:");
	scanf("%d",&islem);

	switch(islem) {
		
		case 1:
			printf("Bakiyeniz:%d\n",bakiye);
			printf("Cekilecek Tutar:");
			scanf("%d",&tutar);
		
			if(tutar > bakiye && bakiye>0) {
				printf("Bakiyeniz Yetersiz.\n");
				break;
			}	
			bakiye -= tutar;
			printf("Bakiyeniz: %d",bakiye);
			break;		
				
		case 2:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Yatirilacak Tutar:");
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("Bakiyeniz: %d",bakiye);
			break;
		case 3:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Havale yapilacak Tutar:");
			scanf("%d",&tutar);
					
			if(tutar > bakiye && bakiye>0) {
				printf("Bakiye Yetersiz.\n");
				break;
			}
			bakiye -= tutar;
			printf("Bakiyeniz: %d\n",bakiye);
			break;
		case 4:
			printf("Bakiyeniz: %d",bakiye);
			break;
		case 5:
			printf("Kart iade edildi.\n");
			break;
			
		default:
			printf("Bilinmeyen islem");
			break;
			
	}
        
    getch ();
	return 0;
}