#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  /*  float a=3.14;
    printf("sayi\n%.2f",a);
*/

    int tamsayi=1;
    char karakter='c';
    float ondaliksayi1=3.15;
    double ondaliksayi2=789.45;

    printf ("char bellekte %d byte kadar yer tutar\n",sizeof(char));
    printf ("int bellekte %d byte kadar yer tutar\n",sizeof(int));
    printf ("float bellekte %d byte kadar yer tutar\n",sizeof(float));
    printf ("double bellekte %d byte kadar yer tutar\n",sizeof(double));

    getch();
    return 0;
}