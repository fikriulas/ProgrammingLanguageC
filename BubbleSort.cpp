#include<stdio.h>
/*
Fikri ulas
C ile Bubble Sort - Baloncuk Siralama - Kabarcik Siralamasi
http://bilisimaraci.com/bubble-sort-baloncuk-siralama-kabarcik-siralamasi/programlama-dili-c/#more-121
*/
void diziGoster(int []); //function prototype
int main()
{
	int dizi[5] = {1,3,2,4,5};					
	int i,j;
	for(i=0;i<5;i++)      // sort array
	{
		for(j=0;j<i;j++)
		{
			if(dizi[j]>dizi[i])
			{
				int temp = dizi[j];
				dizi[j]=dizi[i];
				dizi[i]=temp;
			}
		}
	}
	diziGoster(dizi);	
}
void diziGoster(int dizi[])   // show array
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",dizi[i]);
	}
}
