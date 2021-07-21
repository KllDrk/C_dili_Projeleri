#include<stdio.h>

int main()
{
	int sayi[2],c,deger;
	for(int i=100;i<1000;i++)
	{
    sayi[0]=i/100;
    c=i/10;
    sayi[1]=c%10;
	sayi[2]=i%10;
	if(sayi[0]!=sayi[1] && sayi[1]!=sayi[2] && sayi[0]!=sayi[2])
	{
		deger=deger+1;
		printf("%d. sayi %d\n",deger,i);
			}		
	}
	printf("%d sayi bu kurala uyuyor.",deger);
	return 0;
}
