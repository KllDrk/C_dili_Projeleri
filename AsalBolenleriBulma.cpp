#include <stdio.h>

int islem1(int);

int main()
{
	islem1(221*6);
    return 0;
}

islem1(int a)
{
	int i=2,c=1,sayac=0;
	printf("sayi....%d\n",a);
    int d=a;
	for(i;i<=a;i++)
	{
		if(a%i==0 )
		{
		a=a/i;
		printf("asal bolenler...%d\n",i);
		}
	}
	d=d/6;
		for(int j=1;j<=d;j++)
	{
		if(d%j==0)
	    {
	   	c=j*6;
        printf("6 nin katlarinin bolenleri....%d\n",c);
        sayac++;
		}
		
	}
	printf("6 nin katlarini bolenlerin sayisi......%d",sayac);
	return 1;
}
