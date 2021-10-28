#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,taban;
printf("Ucgenin taban degerini girin:");
scanf("%d",&taban);

for(i=1;i<=taban;i++){
	
	for(j=1;j<=taban-i;j++){
		printf(" ");
	}
	for(j=1;j<=i;j++){
		printf("* ");
	}
	
	printf("\n");
	
}
    getch ();
	return 0;
}