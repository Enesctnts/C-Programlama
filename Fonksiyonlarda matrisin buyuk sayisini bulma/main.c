#include <stdio.h>
#include <stdlib.h>


void matrisEnBuyukElemaniYazdir(int matris[5][5],int satir,int sutun);

int main()
{
     int matris[5][5]={   {11,2,61,34,2},

                          {22,1,45,77,2},

                          {12,14,25,17,52},

                          {21,13,40,7,20},

                          {92,1,24,66,22}

                       };



    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            {
                printf("%3d",matris[i][j]);
            }
            printf("\n");
    }

    printf("\n\n");


    matrisEnBuyukElemaniYazdir(matris,5,5);

    system("pause");
    return 0;
}
void matrisEnBuyukElemaniYazdir(int matris[5][5],int satir,int sutun)
{
    int i,j,a,b,gecici;
    int geciciMatris[satir][sutun];

    for(int i=0;i<satir;i++)
    {
        for(int j=0;j<sutun;j++)
           {
            geciciMatris[i][j]=matris[i][j];
           }

    }



   for(i=0;i<satir;i++)
   {
        for( a=0;a<sutun;a++)
        {
            for( j=0;j<sutun-1;j++)
            {
                if(matris[i][j]>matris[i][j+1])
                {
                    gecici=matris[i][j];
                    matris[i][j]=matris[i][j+1];
                    matris[i][j+1]=gecici;
                }
            }
        }
        printf("%d.satirin en buyuk elemani = %d\n",i+1,matris[i][4]);

   }
   printf("\n\n");


 for(i=0;i<sutun;i++)
   {
        for( b=0;b<satir;b++)
        {
            for( j=0;j<satir-1;j++)
            {
                if(geciciMatris[j][i]>geciciMatris[j+1][i])
                {
                    gecici=geciciMatris[j][i];
                    geciciMatris[j][i]=geciciMatris[j+1][i];
                    geciciMatris[j+1][i]=gecici;
                }
            }
        }
        printf("%d.sutunun en buyuk elemani = %d\n",i+1,geciciMatris[4][i]);

   }




}