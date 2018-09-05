#include <stdio.h>

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
