#include<stdio.h>
int main()
{
	FILE *oku;
	char metin[35];	
	oku = fopen("bilisimAraci.txt","r");
	
	fread(metin,sizeof(char),5,oku);
	printf("Metin: %s",metin);	
}
