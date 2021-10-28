#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
char sehir[4][15];
int i;
for(i=0;i<3;i++)
{
    printf("illeri giriniz=");
    scanf("%s",&sehir[i]);
} 

    printf("Girilen iller: %s %s %s",sehir[0],sehir[1],sehir[2]);

    getch();
    return 0;
}