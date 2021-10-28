#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

int asal_mi(int sayi)
{
    for(int i=2; i<sayi;i++)
    {
        if (sayi%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    
    int n;
    printf("Sayi giriniz: ");
    scanf("%d",&n);
    
    if (asal_mi(n)==0)
        {
            printf("Girilen sayi asal degildir.");
        }
    else
        {
            printf("Girilen sayi asaldir.");
        }
    
    getch();
    return 0;
}

