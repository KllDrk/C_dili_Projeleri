#include<stdio.h>

int dikdortgen(int,int);

int main(void)
{
    int en,boy;
    printf("en ve boy giriniz.\n");
    scanf("%d %d",&en,&boy);
    dikdortgen(en,boy);
}

int dikdortgen(int a,int b)
{
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<a;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
