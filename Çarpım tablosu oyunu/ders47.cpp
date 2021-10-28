#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<time.h>

//Çarpım Tablosu oyunu

int main()
{
    int sayi1,sayi2,dogru=0,yanlis=0,cevap,sayi_adet,i;
    printf("Oyunda kac sayi olacak? ");
    scanf("%d",&sayi_adet);
    srand(time(NULL));
    for(i=1;i<=sayi_adet;i++)
    {
    int sayi1 = rand() % (10 - 1) + 1;
    int sayi2 = rand() % (10 - 1) + 1;
    printf("%d x %d =  ?\n",sayi1,sayi2);
    scanf("%d",&cevap);
    system("cls");
    if(cevap == sayi1 * sayi2)
    {
        dogru++;
        printf("\nCevabiniz dogrudur..\n\n");
        printf("\n\nDogru Cevap!\n\nDogru Cevap sayisi= %d\n\nYanlis Cevap sayisi= %d\n\n",dogru,yanlis);
    }
    else
    {
        yanlis++;
        printf("\nCevabiniz yanlistir..\n\n");
        printf("Yanlis Cevap!\n\nDogru Cevap sayisi= %d\n\nYanlis Cevap sayisi= %d\n\n",dogru,yanlis);
    }
    }
    system("cls");
    printf("\n\nOyun Bitti.\n\nToplam Dogru Cevap Sayisi: %d\nToplam Yanlis Cevap Sayisi: %d\n",dogru,yanlis);
    getch();
    return 0;
}

