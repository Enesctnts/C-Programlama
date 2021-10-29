#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 50
int main()
{
    char metin[SIZE];
    printf("bir metin giriniz\n");
    gets(metin);
    int i;
    char toplam = 0;
    for(i=0;i<SIZE;i++)
    {
        if(metin[i]== '\0')
            break;



            if(isdigit(metin[i]) == 1)
               {
                    printf("%c",metin[i]);
                    toplam = toplam + metin[i] ;
               }
             

    }

    printf("\nMetindeki sayisal degerlerin toplami = %c\n",toplam);
    system("pause");
    return 0;
}