#include <stdio.h>
#include <stdlib.h>

int minimum(int ,int );
int obeb(int ,int );
int okek(int ,int );
int main()
{   int sayi1,sayi2;

    printf("iki adet sayi giriniz.\n");
    scanf("%d%d",&sayi1,&sayi2);
    printf("obeb(%d,%d)=%d\n",sayi1,sayi2,obeb(sayi1,sayi2));
    printf("okek(%d,%d)=%d\n",sayi1,sayi2,okek(sayi1,sayi2));

    system("pause");
    return 0;
}
int minimum(int sayi1,int sayi2)
{
    if(sayi1<sayi2)
        return sayi1;
    else
        return sayi2;
}

int obeb(int sayi1,int sayi2)
{
    int kucukSayi = minimum(sayi1,sayi2);
    for(int i=kucukSayi;i>=1;i--)
    {
        if(sayi1%i==0 && sayi2%i==0)
        {
            return i;
        }
    }
}

int okek(int sayi1,int sayi2)
{   int buyukSayi;
    int kucukSayi=minimum(sayi1,sayi2);
    if(kucukSayi==sayi1)
         buyukSayi=sayi2;
    else
         buyukSayi=sayi1;

    for(int i=buyukSayi; ;i++)
    {
        if(i%sayi1==0 && i%sayi2==0)
        {
            return i;
        }
    }
}