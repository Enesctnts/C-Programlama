#include<stdio.h>
#include<conio.h>


int main () 
{
int vize1,vize2,final;
float dersort;
float universiteort;

printf("1.vize:");
scanf("%d",&vize1);
printf("2.vize:");
scanf("%d",&vize2);
printf("final:");
scanf("%d",&final);
printf("universite notunu giriniz:");
scanf("%f",&universiteort);


dersort=(vize1*3/10.0 + vize2*3/10.0 + final*4/10.0);

if (dersort>=90) {
printf("harf notunuz -AA ve Ders ortalamaniz: %.2f\n", dersort);
}
else if ( dersort >= 85 && dersort < 90) {
	printf("harf notunuz -BA- ve Ders ortalamaniz: %.2f", dersort);
}
else if ( dersort >= 80 && dersort < 85) {
	printf("harf notunuz -BA- ve Ders ortalamaniz: %.2f", dersort);
}
else if ( dersort >= 70 && dersort < 80) {
	printf("harf notunuz -BB- ve Ders ortalamaniz: %.2f", dersort);
	if (universiteort< 2.50) {
	
	printf(" Dersi tekrar alman yararli olur cunku ortalaman dusuk.");
}
}
else if ( dersort >= 60 && dersort < 70) {
	printf("harf notunuz -CB- ve Ders ortalamaniz: %.2f", dersort);
	if (universiteort< 2.50) {
	
	printf(" Dersi tekrar alman yararli olur cunku ortalaman dusuk.");
}

}
else if ( dersort >= 55 && dersort < 60) {
	printf("harf notunuz -CC- ve Ders ortalamaniz: %.2f", dersort);
	if (universiteort< 2.50) {
	
	printf(" Dersi tekrar alman yararli olur cunku ortalaman dusuk.");
}
}
else if ( dersort >= 50 && dersort < 55) {
	printf("harf notunuz -DD- ve Ders ortalamaniz: %.2f", dersort);
	if (universiteort< 2.50) {
	
	printf(" Dersi tekrar alman yararli olur cunku ortalaman dusuk.");
}
}
else  {
	printf("harf notunuz -FF- ve Ders ortalamaniz: %.2f\n ", dersort);
	printf("Dersden kaldiniz.");
}

getch ();
return 0 ;

}