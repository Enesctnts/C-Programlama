#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float a,b,c;
    printf("Denklemin a,b,c degerlerini giriniz \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float delta = (b*b)-(4*a*c);
    float kokDelta = sqrt(delta);
    if(delta>0)
    {
        printf("%.0fx2+%.0fx+%.0f\n",a,b,c);
        printf("Denklemin iki farkli reel koku vardir\n");
        printf("kok1= %.2f\nkok2= %.2f\n",(-b + kokDelta )/(2*a),(-b- kokDelta )/(2*a));

    }
    else if(delta==0)
    {   printf("%.0fx2+%.0fx+%.0f\n",a,b,c);
        printf("Denklemin iki reel koku vardir fakat bunlar aynidir.\n");
         printf("kok1= %.2f\nkok2= %.2f\n",(-b + kokDelta )/(2*a),(-b -kokDelta )/(2*a));
    }
    else if(delta<0)
    {
        printf("%.0fx2+%.0fx+%.0f\n",a,b,c);
        printf("Denklemin reel koku yoktur\n");
    }
    system("pause");
    return 0;
}