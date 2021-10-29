#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 50
int main()
{    char metin[SIZE];
     printf("Tamami kucuk harften olusan bir karakter dizisi giriniz\n");
     gets(metin);


    int  i;
    for (i=0;i<SIZE;i++)
    {
        if(metin[i] == '\0'){

            break;
        }

     else
        {
        char buyukHarf;
        printf("%c",toupper(metin[i]));
        }

    }

    printf("\n");
    system("pause");
    return 0;
}