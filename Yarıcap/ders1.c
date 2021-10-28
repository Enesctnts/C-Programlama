#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{

    int yaricap; 
    float hacim;

    printf("Kurenin yaricapini giriniz:");
    scanf("%d", &yaricap);

    hacim=(4/3.0)*PI*(yaricap*yaricap*yaricap);


    printf("Kurenin hacmi:%f",hacim );


    getch ();
    return 0;

}



