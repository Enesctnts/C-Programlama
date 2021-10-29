#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,16,17,18,19,20};
    int aranan,bulundu=0;
    int ortaIndis,sagIndis=19,solIndis=0;

    printf("aranan elemani giriniz.\n");
    scanf("%d",&aranan);


    while(solIndis<=sagIndis)
    {   ortaIndis=(solIndis+sagIndis)/2;
        if(dizi[ortaIndis]==aranan)
        {
            bulundu=1;
            break;
        }
        else if(aranan<dizi[ortaIndis])
        {
            sagIndis=ortaIndis-1;
        }
        else if(aranan>dizi[ortaIndis])
        {
            solIndis=ortaIndis+1;
        }
    }

    if(bulundu)
    {
        printf("bulundu %d.eleman ve %d.indis =% d",ortaIndis+1,ortaIndis,dizi[ortaIndis]);
    }
    else

    {
        printf("bulunamadi");
    }

    return 0;
}