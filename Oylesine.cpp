#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand(time(NULL));
	int sayac=0,x;
	for(;;)
	{
	x=1+rand()%99;
	if(x%3==0)
	{
	printf("1\b");
	sayac++;
	system("COLOR 2");
	}
	if(x%3==1)
	{
	printf("0\b");
	sayac++;
	system("COLOR 4");
	}
	if(x%3==2)
	{
	printf("-1\b");
	sayac++;
	system("COLOR 1");
	}
	if(sayac==20)
	{
	printf("\n");
	sayac=0;	
	}
	
	}
	
	
	return 0;
}
