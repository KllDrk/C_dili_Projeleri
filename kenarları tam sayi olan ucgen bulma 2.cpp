#include<stdio.h>

int main(void)
{
	int alt_sinir , ust_sinir;
	
	printf("alt siniri giriniz...");
	scanf("%d",&alt_sinir);
	
	printf("ust siniri giriniz...");
	scanf("%d",&ust_sinir);
	
	for(int k=alt_sinir;k<=ust_sinir;k++)
	{
		
		for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
		for(int l=1;l<=10;l++)
		{
			int x=i+j+l;
		if(x>=alt_sinir && x<=ust_sinir)
		{
			printf("1.Kenar...%d\t2.Kenar...%d\t3.Kenar...%d\n",i,j,l);
			}
			
			if(x>=ust_sinir+1)
		{
			break;
		}	
		}

		}
		
	}
	
	}
	return 0;
}
