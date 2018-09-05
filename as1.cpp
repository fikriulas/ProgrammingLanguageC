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
/*
#include<stdio.h>
int main()
{
	char c;
	FILE *oku;
	oku=fopen("den3.txt","r");
	while(!feof(oku))
	{
		fscanf(oku,"%c",&c);
		printf("%c\n",c);
	}
}
*/
