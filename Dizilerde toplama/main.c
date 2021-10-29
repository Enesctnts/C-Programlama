#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[3][3];
    int i,j;
    printf("Matrisin elemanlarinin giriniz.\n");

    for(int i=0;i<3;i++)
    {   printf("%d.satir elemanlari.\n",i+1);
        for(int j=0;j<3;j++)
        {
            printf("%d.sutun elemani.\n",j+1);
            scanf("%d",&dizi[i][j]);
        }
    }

    printf("Matris\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%3d",dizi[i][j]);

        }
        printf("\n");
    }

    int satirToplam=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            satirToplam+=dizi[i][j];
        }
        printf("%d.satir elemanlari toplami =%d\n",i+1,satirToplam);

        satirToplam=0;
    }

     int  sutunToplam=0;

     for(i=0;i<3;i++)

    {
        for( j=0;j<3;j++)
        {
            sutunToplam+=dizi[j][i];
        }

        printf("%d.sutun elemanlari toplami =%d\n",i+1,sutunToplam);

        sutunToplam=0;
    }


    return 0;
}