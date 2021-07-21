#include<stdio.h>

int main()
{
	int sayi,toplam;
	
	for(int j=0;j<10000;j++)
	{
	sayi=j;
	for(int i=1;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			toplam=toplam+i;
		}
	}
	if(sayi==toplam)
	{
		toplam=0;
		printf("%d mukemmel sayidir.\n",sayi);
		for(int n=1;n<sayi;n++)
		{
		if(sayi%n==0)
		{
		printf("bölen degerler...%d\n",n);
		}
		}
		
	}
	else
	{
		
		toplam=0;
		
	}	
	}
	
	return 0;
}
