#include <stdio.h>
#include <stdlib.h>

void diyagonelElemanlarToplami(int matris[5][5],int elemanSayisi);

int main()
{
    int matris[5][5];

    for(int i=0;i<5;i++)
    {
        for(int j =0;j<5;j++)
        {
            if(j==i)
            {
                matris[i][j]=1;
            }
            else
            {
                matris[i][j]=0;
            }
            printf("%3d",matris[i][j]);
        }
        printf("\n");
    }

    diyagonelElemanlarToplami(matris,5);
    system("pause");
    return 0;
}
void diyagonelElemanlarToplami(int matris[5][5],int elemanSayisi)
 {
     int toplam=0;

        for(int i=0;i<5;i++)
    {
        for(int j =0;j<5;j++)
        {

          if(i==j)
            toplam=toplam+matris[i][j];
        }

    }

    printf("\ndiyagoneldeki elemanlar toplami=%d\n",toplam);
 }