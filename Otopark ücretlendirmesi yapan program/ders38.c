#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>


/* Otopark ücretlendirmesi yapan program */

int main()
{
    
    int ucret;
        dur: printf("\n\nislemi seciniz.\n");
            printf("\n");
                printf("\nOtoparkta kac saat kaldiniz:");
                    scanf("%d",&ucret);
    
        while(1<=ucret && ucret<=4)
            {
            printf("Borcunuz= 10 Tl'dir.");
                goto dur;
                    break;
            } 
   
        while(5<=ucret && ucret<=8)
            {
                 
                printf("Borcunuz= 12 Tl'dir.");
                    goto dur;
                        break;
            }    
        while(9<=ucret && ucret<=12)
            {
                printf("Borcunuz= 15 Tl'dir.");
                    goto dur;
                        break;
            }
        while(ucret>=13)
            {
                printf("Borcunuz= 20 Tl'dir.");
                    goto dur;
                        break;
            } 
        while(ucret<0)
            {
                printf("Yanlis girdiniz,Tekrar deneyiniz..");
                    goto dur;
                    break;
            }
        while(ucret=0)
            {
                    break; 
            }
        while(isdigit(ucret)==0)
        	{
            	printf("Harf tanimli degildir, Tekrar deneyiniz..");
            		break;
       		}
       
            printf("\n");
            
            getch();
        return 0;
} 
