#include<stdio.h>

int narsist_sayilar(int);

int main()
{
	int a;
	int narsist_sayi;
	printf("deger girin...");
	scanf("%d",&narsist_sayi);
	
	int y=narsist_sayilar(narsist_sayi);
	if(y==0)
	{
		printf("narsist sayi degil.");
	}
	else
	{
		a++;
		printf("%d. narsist sayi....%d",a,y);
	}
	return 0;
	}
	


int narsist_sayilar(int a)
{
    int d,e;
	
	while(a==0)
	{
		d++;
		int c1;
		c1=a%10;
		a=a-c1;
		a=a/10;
	}
	while(a==0)
	{
		int c2;
		c2=a%10;
		e=e+c2^d;
		a=a-c2;
		a=a/10;
	}
    if(a==e)
    {
        return e;
	}
	else
	{
		return 0;
	}
}
