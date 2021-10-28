#include<stdio.h>
#include<stdlib.h>

// Polindrome sayı bulan program 1331,101,2,3,4..,13431
void Polindrome()
{
    int x,y,basamak,toplam=0;
    
    printf("Kontrol edilcek sayiyi giriniz: ");
    scanf("%d",&x);
    y=x;
    while (x!=0)
    {
        basamak=x%10;
        toplam=toplam*10+basamak;
        x=x/10;
    }
    
    if (y==toplam )
    {
        printf("%d sayisi Polindrome sayidir.\n",y);      
        
    }
    else
    {
        printf("%d sayisi Polindrome sayisi degildir.\n",y);
        
    }
}
int main()
{
   Polindrome();
    
    system("pause");
    return 0;
    
}
