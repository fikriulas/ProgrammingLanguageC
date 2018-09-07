#include<stdio.h>
/*
Fikri ulaş Osmanağaoğlu
http://bilisimaraci.com/c-ile-dosya-islemleri-dosya-okuma/programlama-dili-c/
*/
int main()
{
	FILE *oku;
	char metin[35];	
	oku = fopen("bilisimAraci.txt","r");
	
	fread(metin,sizeof(char),5,oku);
	printf("Metin: %s",metin);	
}
