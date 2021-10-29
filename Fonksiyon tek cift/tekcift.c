#include <stdio.h>
#include <stdlib.h>

void tekcift(int girilenSayi)
{
   if(girilenSayi%2==0)
    {
        printf("Sayi cifttir.\n");
    }
    else
    {
        printf("Sayi tektir.\n");
    }
}

int main()
{
    int sayi;
    printf("Bir sayi giriniz.\n");
    scanf("%d",&sayi);

    tekcift(sayi);


    return 0;
}