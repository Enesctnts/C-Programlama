#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>

/* klavyeden girilen sayının karesini alan program 

int main()
{
    int sayi;
    printf("Sayiyi giriniz=");
    scanf("%d",&sayi);
   
    printf("Sayinin karekoku= %d",sayi*sayi);
    
    
     
    
    getch();
    return 0;
} 
*/

/* klavyeden girilen sayının tam bölenleri bulan program */

int main()
{
    int sayi;
    int i;

    printf("Sayiyi giriniz:");
    scanf("%d",&sayi);

    for(i=1;i<=sayi;i++)
    {
        if(sayi%i==0)
        {
            printf("%d\n",i);
        }    
    }
    getch();
    return 0;
} 