#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,gecici;
   int adet;
   printf("Eleman adetini giriniz.\n");
   scanf("%d",&adet);
   int dizi[adet];

   printf("Dizi elemanlarini giriniz.\n");
   for(i=0;i<adet;i++)
   {
       printf("%d.elemani giriniz.\n",i+1);
       scanf("%d",&dizi[i]);
   }

   for(i=0;i<adet-1;i++)

    {
        for(j=0;j<adet-i-1;j++)
            {
                if(dizi[j]<dizi[j+1])
                {
                    gecici=dizi[j];
                    dizi[j]=dizi[j+1];
                    dizi[j+1]=gecici;
                }
            }
    }

    printf("Siralanmis dizi.\n");

    for(i=0;i<adet;i++)
   {
       printf("%3d",dizi[i]);

   }


    return 0;
}