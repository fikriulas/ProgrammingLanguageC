#include <stdio.h>
/*
Fikri Ulaş Osmanğaoğlu
C dosya açma
http://bilisimaraci.com/2018/09/05/c-ile-dosya-islemleri-dosya-acma/
*/
int main()
{
	FILE *outfile,*infile;	
	outfile=fopen("den1.txt","w");
	if(outfile!= NULL)
		printf("dosya olusturuldu.");
	if(infile==NULL){
		printf("dosya yok.");
	}	
	
}
