#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int main()
{
    char isim [][20]={"Enes","Miko","Ugur","Batu","Bilo","Memo","Sezo"},gecicibellek[20];
    int i,j;
    printf("\toncesi     ");
    printf("\n*****************\n\n");
    for (i = 0; i < 7; i++)
    {
        printf("\t %s\n",isim[i]);
    }

    for (i = 0; i < 7; i++)
    {
        for ( j = 0; j < 7; j++)
        {
            if (strcmp(isim[j],isim[j+1])>0)
        {
            strcpy(gecicibellek,isim[j]);
            strcpy(isim[j],isim[j+1]);
            strcpy(isim[j+1],gecicibellek);
        }
        }
    }
    printf("\n");
    printf("\tsonrasi    ");
    printf("\n*****************\n");
    for (i = 0; i < 8; i++)
    {
        printf("\t %s\n",isim[i]);
    }


    getch();
    return 0;
}

