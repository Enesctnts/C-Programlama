#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int matris[4][4];
    int i,j,sayi,bulundu=0;


    srand(time(NULL));

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            matris[i][j]=1+rand()%20;
        }
    }

    printf("Olusan matris.\n");
      for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%3d",matris[i][j]);
        }
        printf("\n");
    }

    printf("Aranacak degeri giriniz.\n");
    scanf("%d",&sayi);

      for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(sayi==matris[j][i])
                {
                bulundu=1;

                }
        }
    }

    if(bulundu==1)
        printf("Aranan deger matriste bulunuyor.\n");
    else
        printf("Aranan deger matriste bulunmuyor.\n");

    return 0;
}