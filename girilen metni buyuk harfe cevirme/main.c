#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 50
int main()
{  char metin[SIZE];

    printf("Tamami kucuk harften olusan bir karakter dizisi giriniz\n");
    gets(metin);
    int  i;
    for (i=0;i<SIZE;i++)
    {
        if(!metin[i] == '\0')
        {
            char buyukHarf = metin[i] - 32;
            printf("%c",buyukHarf);
        }
        else
        {
            break;
        }
        
    }
    printf("\n");
    system("pause");
    return 0;
}