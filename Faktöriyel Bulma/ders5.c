#include<stdio.h>
#include<conio.h>

int main() 
{
	int n;
	int fact=1;
	
	
	
	printf("Faktoriyel Giriniz:");
	scanf("%d",&n);
	
	while(n>0){
	printf("%d\n",n);
	fact = fact*n;
	
	n--;
	}
	
	printf("%d ",fact);
	getch ();
	return 0;
}