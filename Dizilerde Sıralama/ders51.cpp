#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<time.h>

int main()
{
    int i,j,sayi,dizi[10],temp;
    printf("kac sayi girmek istiyorsunuz: ");
    scanf("%d",&sayi);
    for ( i = 0; i < sayi; i++)
    {
        printf("%d. sayiyi giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("\n\n");
    printf("**************");
    printf("\n\n");
    printf("Girilen sayilarin ilk hali");
    printf("\n\n");

    for ( i = 0; i < sayi; i++)
    {
        printf("%d. girilen sayi: %d\n ",i+1,dizi[i]);
      
    }
    printf("\n\n");
    printf("**************");
    printf("\n\n");
    printf("Girilen sayilarin son hali");
    printf("\n\n");

    for ( i = 0; i < sayi; i++)
    {
        for ( j = 0; j < sayi; j++)
        {
       if (dizi[i]>dizi[j])
         {
        temp=dizi[i];
        dizi[i]=dizi[j];
        dizi[j]=temp;   
         }
        }
        
    }
for ( i = 0; i <sayi; i++)
{
    printf("Buyukten kucuge girilen sayilar= %d\n",dizi[i]);

}
system("pause");
    return 0;
}