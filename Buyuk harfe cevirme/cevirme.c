#include <stdio.h>
#include <stdlib.h>

int main()
{   /* char ile bir değişken tanımladığımız zaman ona eşitlediğimiz karakteri o değişkene atamaz onun ASCI Kod tablosundaki sayı karşılığını atar böyle öğrenmeliyiz.*/
    char kucukHarf = 'a';

    char buyukHarf = kucukHarf - 32 ;

    printf("buyuk harf = %c",buyukHarf);

    return 0;
}