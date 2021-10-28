#include <stdio.h>
#include <stdlib.h>

int main()
{   int matris1satir,matris1sutun;
    int matris2satir,matris2sutun;
    int i,j;
    int matris1[matris1satir][matris1sutun];
    int matris2[matris2satir][matris2sutun];
    int toplamMatris[matris1satir][matris1sutun];
    char sembol;

    printf("Birinci matrisin satir ve sutun sayilarini giriniz.\n");
    scanf("%d",&matris1satir);
    scanf("%d",&matris1sutun);
    printf("ikinci matrisin satir ve sutun sayilarini giriniz.\n");
    scanf("%d",&matris2satir);
    scanf("%d",&matris2sutun);

    //MATRiS1 TANIMLAMA
    for(i=0;i<matris1satir;i++)
    {
        for(j=0;j<matris1sutun;j++)
        {	printf("Birinci matrisin\n");
            printf("%d.satir %d.sutun elemanlarini giriniz.\n",i+1,j+1);
            scanf("%d",&matris1[i][j]);
        }
    }

    //MATRiS2 TANIMLAMA
    for(i=0;i<matris2satir;i++)
    {
        for(j=0;j<matris2sutun;j++)
        {	printf("ikinci matrisin\n");
            printf("%d.satir %d.sutun elemanlarini giriniz.\n",i+1,j+1);
            scanf("%d",&matris2[i][j]);
        }
    }
    //MATRÝS1 YAZDIRMA
    printf("\n\n\n");
    printf("MATRIS 1\n\n");
 for(i=0;i<matris1satir;i++)
    {
        for(j=0;j<matris1sutun;j++)
        {
            printf("%4d",matris1[i][j]);

        }
        printf("\n");

    }
//MATRÝS2 YAZDIRMA
    printf("\n\n\n");
    printf("MATRIS 2\n\n");
 for(i=0;i<matris1satir;i++)
    {
        for(j=0;j<matris1sutun;j++)
        {
            printf("%4d",matris2[i][j]);

        }
        printf("\n");

    }

    printf("\n\n\n");

    printf("Matrisler ile yapacağınız işlemi seçiniz sembol olarak giriniz = +,-,x");

    scanf("%c",&sembol);

    if (sembol == '+')
    {
        //TOPLAMA

        for(i=0;i<matris1satir;i++)
    {
        for(j=0;j<matris1sutun;j++)
        {
            toplamMatris[i][j]=matris1[i][j]+matris2[i][j];
            printf("%4d",toplamMatris[i][j]);

        }
        printf("\n");
    }



    }
    else if(sembol == '-')
    {
        //CIKARMA

        for(i=0;i<matris1satir;i++)
    {
        for(j=0;j<matris1sutun;j++)
        {
            toplamMatris[i][j]=matris1[i][j]-matris2[i][j];
            printf("%4d",toplamMatris[i][j]);
        }
    }



    }

    else if(sembol == 'x')
    {
        //CARPMA



    }

    //YAZDIRMA
    printf("\n\n Sonuc Matrisi\n\n");
    for(i=0;i<matris1satir;i++)
    {
        for(j=0;j<matris1sutun;j++)
        {
            printf("%4d",toplamMatris[i][j]);
        }
        printf("\n");
    }


    return 0;
}