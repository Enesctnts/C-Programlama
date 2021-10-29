#include <stdio.h>
#include <stdlib.h>

int main()
{
    int elemanSayisi;
    int i,j,gecici;
    printf("Kac adet eleman girilecek.\n");
    scanf("%d",&elemanSayisi);
    int  dizi[elemanSayisi];
    printf("Dizinin elemanlarini giriniz.\n");
    for(i=0;i<elemanSayisi;i++)
    {
        scanf("%d",&dizi[i]);
    }

    printf("Dizinin elemanlari.\n");

    for(i=0;i<elemanSayisi;i++)
    {
        printf("%3d",dizi[i]);
    }

    for(i=0;i<elemanSayisi-1;i++)

    {
        for(j=0;j<elemanSayisi-1-i;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                gecici=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;
            }
        }
    }


    printf("\nDizinin siralanmis hali.\n");

    for(i=0;i<elemanSayisi;i++)
    {
        printf("%3d",dizi[i]);
    }

    return 0;
}