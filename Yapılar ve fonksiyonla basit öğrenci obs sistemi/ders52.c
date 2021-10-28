#include<stdio.h>
#include<stdlib.h>
struct Okul
    {
        char isim[20];
        char soyad[20];
        char sinif[20];
        long int no;
        int puan[20];
    };
void hesaplama()
{
    struct Okul ogrenciler[20];
    int i,j,cevap,toplam=0,enbas;
    double ort=0;
    printf("Duzce Universitesine Hos Geldiniz.\n");
    printf("\n********************\n");
    printf("\nOgrencinin Bilgilerini Giriniz.\n\n");
    for ( i = 0; i < 1; i++)
    {
       printf("%d. Ogrencinin Adini Giriniz: ",i+1);
       gets(ogrenciler[i].isim);
       printf("%d. Ogrencinin Soyadini Giriniz: ",i+1);
       gets(ogrenciler[i].soyad);
       printf("%d. Ogrencinin Sinifini Giriniz: ",i+1);
       gets(ogrenciler[i].sinif);
       printf("%d. Ogrencinin Numarasini Giriniz: ",i+1);
       scanf("%ld",&ogrenciler[i].no);
       for ( j = 0; j < 3; j++)
       {
           printf("Ogrencinin %d. Notunu Giriniz: ",j+1);
           scanf("\n%d",&ogrenciler[j].puan[j]);
           toplam+=ogrenciler[j].puan[j];
       }
       system("CLS");
    }
    printf("\n\n************************\n\n");
    system("CLS");
    
    enbas: printf("Ulasmak istediginiz ogrencinin numarasini giriniz: ");
    scanf("%d",&cevap);
    for ( i = 0; i < 1; i++)
    {
        system("CLS");
        if (cevap==ogrenciler[i].no)
        {
            system("CLS");
            ort=toplam/3.0;
            printf("isim: %s\nSoyisim: %s\nSinif: %s\nNo: %ld\n1.Notu: %d\n2.Notu: %d\n3.Notu: %d\nOrtalamasi: %.2lf\n\n",ogrenciler[i].isim,ogrenciler[i].soyad,ogrenciler[i].sinif,ogrenciler[i].no,ogrenciler[i].puan[i],ogrenciler[i+1].puan[i+1],ogrenciler[i+2].puan[i+2],ort);
            if (0<=ort && ort<=49)
            {
                printf("Ogrenci Dersten Kalmistir..\n\n");
            }
            else if (50<=ort)
            {
                printf("Ogrenci Dersten Gecmistir..Tebrik Ederiz...\n\n");
            }
            else
            {
                printf("Yanlis Puan Girilmistir..Tekrar Deneyiniz..\n\n");
                goto enbas;
            }
            
        }
        else
        {
            printf("Boyle bir ogrenci bulunmamaktadir.Tekrar Deneyiniz..\n\n");
            goto enbas;
        }
        
    }
}
int main()
{
    hesaplama();
    system("pause");
    return 0;
}