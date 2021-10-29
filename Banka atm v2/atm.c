#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand (time(NULL));

    float bakiye = (float) (rand() % 2000 );
    //float bakiye=1200;
    float cekilecek;

    printf("Hesap bakiyeniz = %.2f\n",bakiye);
    printf("cekmek istediginiz miktari giriniz\n");
    scanf("%f",&cekilecek);

    if(cekilecek<=1000)
    {
        if(cekilecek<=bakiye)
        {

    bakiye = bakiye - cekilecek;
    printf("kalan bakiye =%.2f\n",bakiye);
    printf("cekilen para = %.2f",cekilecek);

        }
        else
        {
            printf("yetersiz bakiye.\n");
        }
    }
    else
    {
        printf("En fazla 1000 tl cekebilirsiniz.");
    }
    return 0;
}