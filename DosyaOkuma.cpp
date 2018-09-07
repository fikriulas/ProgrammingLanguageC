#include<stdio.h>
/*
Fikri ulaş Osmanağaoğlu
http://bilisimaraci.com/c-ile-dosya-islemleri-dosya-okuma/programlama-dili-c/

*/
int main()
{
	FILE *oku;
	char karakter;
	
	oku = fopen("bilisimAraci.txt","r");	
	karakter = getc(oku);
	printf("okunan karakter: %c", karakter);
	
	fscanf(oku,"%c",&karakter);
	printf("%c",karakter);
}
