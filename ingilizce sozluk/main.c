#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char ingilizceKelimeler[100][100]={"apple","go","teacher"};
    char turkceKelimelek[100][100]={"elma","gitmek","ogretmen"};
    char cevap[100];

    int i;
    printf("Merhabalar efendim sozlugumuze hosgeldiniz.\n");
    printf("Ekrandaki ingilizce kelimelerin turkce karsiligini giriniz.\n\n");

    for(i=0;i<100;i++)
    {
        do
    {
        printf("\n%s\n\n",ingilizceKelimeler[i]);
        gets(cevap);
        if(strcmp(cevap,turkceKelimelek[i])!=0)
        {   printf("\n-----------------------\n");
            printf("\nYanlis cevap tekrar giriniz.\n");
            printf("\n-----------------------\n");
        }

    }while(strcmp(cevap,turkceKelimelek[i])!=0);

    }
    return 0;
}