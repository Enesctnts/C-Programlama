#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dakika,ucret;
    printf("Konusma surenizi dakikda cinsinden giriniz.\n");
    scanf("%f",&dakika);

    //ilk 3 dakika 0.25 TL.

    if(dakika<=3)
    {
        ucret=0.25;
        printf("Ucret=%.2f",ucret);
    }

    else

    {
        //ilk 3 dakika sonrasi her dakika 0.08 kurus,
        ucret= 0.08*(dakika-3)+0.25;
        printf("ucret=%.2f",ucret);

    }
    
    system("pause");
    return 0;
}