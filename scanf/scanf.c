#include <stdio.h>
#include <stdlib.h>

int main()
{   char kelime[20];
printf("ismizini giriniz\n");
// BU KULLANIM YANLIŞTIR
// scanf("%s",&kelime);

//BU KULLLANIM DOĞRUDUR

scanf("%s",kelime);
printf("Merhaba %s",kelime);

/* BİR DİZİ İSMİ O DİZİNİN İLK ELEMANININ BELLEK ADESİNİ TEMSİL
 EDER BU YÜZDEN & İŞARETİ KULLANMAYA GEREK YOKTUR
    */
    return 0;
}