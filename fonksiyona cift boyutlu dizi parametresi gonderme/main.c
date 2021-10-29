#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

void matrisinIceriginiYazdir(int ikiBoyutluDizi[][3],int satirSayisi,int sutunSayisi)
{
    int i,j;

    for(i=0;i<satirSayisi;i++)
    {
        for(j=0;j<sutunSayisi;j++)
        {
            printf("matris[%d][%d]=%d\n",i,j,ikiBoyutluDizi[i][j]);
        }

    }

}
int main()
{
    int matris[3][3]={
                        {1,1,1},
                        {2,2,2},
                        {3,3,3}
                    };


    matrisinIceriginiYazdir(matris,3,3);

    getch();
    return 0;
}