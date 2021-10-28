#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
/* Havayolu ücretlendirmesi yapan program */
int main()
{
    int el,bagaj,eltop=0,bagtop=0;
        dur: printf("\n*******islemler*******\n");
        printf("\n");
        printf("\nElinizdeki agirligi kac kg'dir:");
            scanf("%d",&el);

        printf("\nBagajiniz agirligi kac kg'dir:");
            scanf("%d",&bagaj);

         if(el>=0 && el<=8)
        {
            printf("\nElinizdeki bagajiniz icin odeyeceginiz tutar bulunmamaktadir.");
            
            if(bagaj>15)
            {
                bagtop=(bagaj-15)*5;
                printf("\nBagajiniz icin odeyeceginiz tutar: %d'TL dir.",bagtop);
            }  
             if(bagaj>=0 && bagaj<15)
            {
                printf("\nBagajiniz icin odeyeceginiz tutar bulunmamaktadir.");
            }
        }

         if(el<0 || bagaj<0)
        {
            printf("\n\nYanlis giris yaptiniz, Tekrar deneyiniz..\n\n\n");
            goto dur; 
        }
        
        if(el>8)
        {
            eltop=(el-8)*4;
            printf("Elinizdeki agirlik icin odeyeceginiz tutar: %d'TL dir.",eltop);
            if(bagaj>=0 && bagaj<15)
            {
                printf("\nBagajiniz icin odeyeceginiz tutar bulunmamaktadir.");
            }
            if(bagaj>15)
            {
                bagtop=(bagaj-15)*5;
                printf("\nBagajiniz icin odeyeceginiz tutar: %d'TL dir.",bagtop);
            }  
        }
        printf("\n");
        getch();
        return 0;
} 
