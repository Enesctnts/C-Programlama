#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main()
{
int i,j;
	
	for(i=1;i<=5;i++)//üst yarı
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=5;j>=i;j--)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	
	for(i=1;i<=5;i++) //alt yarı
	{
		for(j=5;j>=i;j--)
		{
			printf("*");
		}	
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
    getch();
return 0;
}