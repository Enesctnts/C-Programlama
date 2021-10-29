#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{   char harf;
    int sira;
    printf("Bir harf giriniz.\n");
    scanf("%c",&harf);
    if(harf>='A' && harf<='Z')
    {
        sira=(int)harf-(int)'A'+1;

    }
    else if(harf>='a' && harf<='z')
    {
        sira=(int)harf-(int)'a'+1;
    }
    else
    {
        printf("Lutfen gecerli harf giriniz.\n");
    }

    printf("%c=%d.harf",harf,sira);

    getch ();
    return 0;
}