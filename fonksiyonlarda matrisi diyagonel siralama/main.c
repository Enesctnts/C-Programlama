#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matrisinDiyagoneliniSiralama(int matris[5][5],int elemanSayisi);

int main()
{
    srand(time(NULL));

    int matris[5][5];

   for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
           matris[i][j]=(0+rand()%25);
           printf("%4d",matris[i][j]);
       }
       printf("\n");
   }


   matrisinDiyagoneliniSiralama(matris,5);

    system("pause");
    return 0;
}
void matrisinDiyagoneliniSiralama(int matris[5][5],int elemanSayisi)
{
    int gecici;
      for(int i=0;i<5;i++)
   {

       for(int j=0;j<5-i-1;j++)
       {
           if(matris[j][j]>matris[j+1][j+1])
           {
               gecici=matris[j][j];
               matris[j][j]=matris[j+1][j+1];
               matris[j+1][j+1]=gecici;
           }
       }

   }

    printf("\n\n");

     for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
           printf("%4d",matris[i][j]);
       }
       printf("\n");
   }


   printf("\ndiyagoneldeki en kucuk eleman=%d",matris[0][0]);
}