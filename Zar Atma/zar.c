#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand (time(NULL));

    int sayi1= (1+ rand() %6);
    int sayi2= (1+ rand() %6);

    if(sayi1==sayi2)
    {
        printf(" %d %d cift zar attiniz tebrikler ",sayi1,sayi2);

    }
    else
    {
        printf("atilan zarlar %d %d ",sayi1,sayi2);
    }

    return 0;
}