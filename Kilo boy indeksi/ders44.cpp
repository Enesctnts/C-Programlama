#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

double VKI_Hesapla(double kilo, double boy);
void VKI_Yazdir(double kilo, double boy);
int main()
{
    setlocale(LC_ALL, "Turkish");

    double kilo,boy;
    printf("Kilonuzu Giriniz (kg): ");
    scanf("%lf",&kilo);
    printf("\nBoyunuzu Giriniz (metre): ");
    scanf("%lf",&boy);

    VKI_Yazdir(kilo,boy);

    getch();
    return 0;
}

double VKI_Hesapla(double kilo, double boy)
{
    double vki = kilo/(pow(boy,2));
    return(vki); 
}

void VKI_Yazdir(double kilo, double boy)
{
    double vki = VKI_Hesapla(kilo,boy);
    if(kilo<=0 || boy<=0)
    {
        printf("Yanlis giris yaptiniz, Tekrar Deneyiniz.\n");
        
    }

    else if(0<vki && vki<=18.5)
    {
        printf("Vucut indeksiniz: %.1f",vki);
        printf("\nZayifsiniz.\n");
        printf("Sagliginiz icin en az %.1f kg daha kilo almaniz gerekiyor.",(18.5-vki));
    }
    else if(18.5<vki && vki<=24.9)
    {
        printf("Vucut indeksiniz: %.1f",vki);
        printf("\nSagliklisiniz.\n");
        printf("Sagliginiz icin formunuzu koruyunuz.");
    }
    else if(25.0<=vki && vki<=29.9)
    {
        printf("Vucut indeksiniz: %.1f",vki);
        printf("\nKilolusunuz.\n");
        printf("Sagliginiz icin en az %.1f kg daha kilo vermeniz gerekiyor.",(vki-24.9));
    }
    else if(30<=vki && vki<=34.9)
    {
        printf("Vucut indeksiniz: %.1f",vki);
        printf("\nObezsiniz.\n");
        printf("Sagliginiz icin en az %.1f kg daha kilo vermeniz gerekiyor.",(vki-24.9));
    }
    else if(35<=vki)
    {
        printf("Vucut indeksiniz: %.1f",vki);
        printf("Asiri Obezsiniz.\n");
        printf("Sagliginiz icin en az %.1f kg daha kilo vermeniz gerekiyor.",(vki-24.9));
    }
    else if(vki<0)
    {
        printf("Yanlis giris yaptiniz, Tekrar Deneyiniz.\n");
        
    }
    
}