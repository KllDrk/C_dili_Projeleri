#include<stdio.h>

int main()
{
	float x,a1=0,a2=1,a3;
	printf("kac deger kadar gosterilsin.\n");
	scanf("%f",&x);
	printf("%f\n%f\n",a1,a2);
	x=x-2;
	for(int i=1;i<=x;i++)
	{
	a3=a2+a1;
	a1=a2;
	a2=a3;
	printf("%f\n",a3);	
		
	}
	return 0;
}
