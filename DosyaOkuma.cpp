#include<stdio.h>
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
