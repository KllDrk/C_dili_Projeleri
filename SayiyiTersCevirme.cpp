#include<stdio.h>

int ters_cevirme(int);

int main(void)
{
	int x;
	printf("degeri giriniz...\n");
	scanf("%d",&x);
	int a=ters_cevirme(x);
	
	
	return 0;
}

int ters_cevirme(int sayi)
{
	while( sayi>0 ) {
		printf( "%d", sayi%10 );
		sayi /= 10;
	}
	printf("\n");
	
}
