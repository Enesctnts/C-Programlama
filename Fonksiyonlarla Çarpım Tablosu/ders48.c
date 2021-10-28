#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<time.h>
//Fonksiyonlarla Çarpım Tablosu
double birincideger,ikincideger;
int islem;
void islemleriGoster()
{
    printf("1-Toplama: \n2-Cikarma: \n3-Carpma: \n4-Bolme: \n");
    printf("\n\nYapmak istediginiz islemi seciniz: ");
    system("COLOR 2");
}
int islemsecici()
{
    scanf("%d",&islem);
}
void DegerAlici()
{   
    if (0<islem && islem<5)
    {
    printf("\n1. Sayiyi Giriniz: ");
        scanf("%lf",&birincideger);
    printf("\n2. Sayiyi Giriniz: ");
        scanf("%lf",&ikincideger);
    }
    else {
    printf("\nYanlis islem yaptiniz..\n");
        }
}
int Hesaplayici(double ilkdeger, double ikincideger, int islem)
{
    int sonuc=0;
    
    printf("Sectiginiz islemin Sonucu: %d",islem);
    switch (islem)
    {
            case 1:  
                    sonuc=ilkdeger+ikincideger;
            break;

            case 2:  
                if (ilkdeger<ikincideger)
                {
                    sonuc=-(ilkdeger-ikincideger);
                }
                else
                {
                    sonuc=ilkdeger-ikincideger;
                }
            break;

            case 3:  
                    sonuc=ilkdeger*ikincideger;
            break;

            case 4: 
                 sonuc=(float)(ilkdeger/ikincideger);
            break;   

    }
    return sonuc;

}
void SonucuGoster(double sonuc)
{   
    if (0<islem && islem<5)
    {
        printf("\nislemin Sonucu: %.2lf",sonuc);
    }  
}
int main()
{
        islemleriGoster();
        islemsecici();
        DegerAlici();
        SonucuGoster(Hesaplayici(birincideger,ikincideger,islem));

    getch();
    return 0;
}

