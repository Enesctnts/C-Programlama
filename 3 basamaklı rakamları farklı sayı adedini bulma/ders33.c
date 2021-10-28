#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>
/*8. 10 elemanlı bir diziye atadığımız ilk değerin maksimum ve minimum değerleri gösterilsin*/

int main()
{
    int sayi[10];
    int i,max=0,min=100;
    for(i=0;i<10;i++)
    {
        printf("%d. sayiyi giriniz:",i+1);
        scanf("%d",&sayi[i]);
        
        if(min>sayi[i])
        {
            min=sayi[i];
        }
        else if(sayi[i]>max)
        {
            max=sayi[i];
        }
    }

    printf("\n\n");
    printf("Maksimum sayi: %d ",max);
    printf("\nMinimum sayi: %d ",min);
    printf("\n\n");

    for(i=0;i<10;i++)
    {  
        printf("\n%d. girilen sayi= %d",i+1,sayi[i]);
    }
    getch();
    return 0;
}