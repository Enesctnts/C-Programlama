#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    unsigned char a=224; //11110000
    unsigned char b=0; //00000000
    unsigned char c=31; //00001111
    unsigned char andSonuc1 = a&b;
    unsigned char andSonuc2 = a&c;

    unsigned char orSonuc1 = a|b;
    unsigned char orSonuc2 = a|c;

    unsigned char xorSonuc1 = a^b;
    unsigned char xorSonuc2 = a^c;

    unsigned char negA = ~a;
    unsigned char negB = ~b;
    unsigned char negC = ~c;

    printf("%d\n",andSonuc1);
    printf("%d\n",andSonuc2);
    printf("%d\n",orSonuc1);
    printf("%d\n",orSonuc2);
    printf("%d\n",negA);
    printf("%d\n",negB);
    printf("%d\n",negC);
    getch();
    return 0;
}