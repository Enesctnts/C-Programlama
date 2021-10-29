#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int carpim;

    //programin ismi de bir parametredir bununla birlikte iki sayi daha girilmelidir toplam 3 parametre eder.
    if(argc !=3 )
    {
        printf("Parametre sayisi 3 olmalidir.\n");
        //parametre sayisi yanlis ise program sonlansin.
        exit(1);
    }

    else
    {
        printf("--------------------------\n");
        printf("Programin adi=%s\n",argv[0]);
        printf("Parametre 1=%s\n",argv[1]);
        printf("Parametre 2 =%s\n",argv[2]);
        printf("--------------------------\n");
    }

    // parametreler string oldugu icin  atoi ile int'e dönüstürüp çarmamiz lazim.

    carpim = atoi(argv[1])*atoi(argv[2]);
    printf("carpim sonucu %s * %s= %d",argv[1],argv[2],carpim);
    return 0;
}