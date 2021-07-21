#include<stdio.h>

int main()
{
	int x,sayac1=0,sayac2=0,z;
	FILE *opsiyonel=fopen("calýsma_programi.doc","w");
	printf("kac dikey bolum olmasini istersiniz?\n");
	scanf("%d",&x);
	printf("kac yatay bolum olmasini istersiniz?\n");
	scanf("%d",&z);
	
	x=5*x;
	z=3*z;
	
	for(int i=0;i<x;i++)
	{
		 if(sayac1%5==0)
    {
       for(int j=0;j<60;j++)
	   {
	   	printf("-");
	   	fprintf(opsiyonel,"-");
		}
		printf("\n");
		fprintf(opsiyonel,"\n");
	}
	for(int l=0;l<z;l++)
	{
		printf("\t");
		fprintf(opsiyonel,"\t");
		sayac2++;
		if(sayac2%3==0 )
		{
		printf("|");
		fprintf(opsiyonel,"|");
		if(sayac2==3)
		{
		fprintf(opsiyonel,"\n");	
		}

		}
	}
    	
    	sayac1++;
	}
    for(int j=0;j<60;j++)
	   {
	   	printf("-");
	   	fprintf(opsiyonel,"-");
		}
		fclose(opsiyonel);
	return 0;
}
