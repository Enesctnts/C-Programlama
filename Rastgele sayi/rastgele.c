#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* Programı her çalıştırdığımızda farklı sayı görmek istiyorsak srand() kullanırız.
    time.h kütüphanesinde bulunur srand(time(NULL)) ile tanımlanır; */

    srand (time(NULL));

    int   rastgeleSayi = (50+rand()%1000);

    printf("%d",rastgeleSayi);


    /* (5*+rand()%1000); komutu rastgele gelen sayının minimum 50 maksimum 1000 olacakğını mod alma ve toplama işlemi ile yapılır
    böylece 0 gelse dahi 50 ile toplanır minimum 50 olur 1200 gelirse 1000 ile bölümünden kalan 200 ve 50 ile toplanınca 250 sayısı olucak */

    return 0;
}