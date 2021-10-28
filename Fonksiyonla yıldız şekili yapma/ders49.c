#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<time.h>

void dortgen(int uzun, int kisa)
{
    int i,j;
    printf("\n");
    for ( i = 0; i < uzun; i++)
    {
        for ( j = 0; j < kisa; j++)
        {
           
            printf("*");
            
        }
        printf("\n");
    }
    
}
int main()
{
    int uz,ks;
    printf("Uzun Kenari Giriniz: ");
    scanf("%d",&uz);
    printf("Kisa Kenari Giriniz: ");
    scanf("%d",&ks);
   
    dortgen(uz,ks);

    getch();
    return 0;

}