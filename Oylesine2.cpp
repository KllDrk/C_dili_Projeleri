#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sayac=0,sayac2=0;
	for(int i=1;;i++)
	{
		if(i%2==0)
		{
			
			printf("1");
			sayac++;
			system("COLOR 2");
		}
		if(i%2==1)
		 {
		 	
		 	printf("0");
		 	sayac++;
		 	system("COLOR 4");
		 }
		if(sayac%8==0 && sayac!=0)
		{
		printf("\t");
		sayac++;
		}
		if(sayac2%10==0 && sayac2!=0){
			printf("\n");
		}
	}
	
	
	return 0;
	
	
}
