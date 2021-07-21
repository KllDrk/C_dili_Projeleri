#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int islem1(int,unsigned short);
int main()
{
	unsigned short x;
	int y,toplam=0;
	srand(time(NULL));
	printf("birinci degeri gir....");
	scanf("%d",&y);
	printf("ikinci degeri gir...");
	scanf("%u",&x);
	FILE *sayilar,*deneme;
	sayilar=fopen("sayilar.txt","w");
	deneme=fopen("deneme.txt","w");
	for(int i=0;i<y;i++)
	{
		x=rand()%100;
		if(x&1<<4)
		{
			y=y+1;
			toplam=toplam+x;
			fprintf(sayilar,"%d\n",toplam);
		}
		else
		{
			y=y-1;
			fprintf(sayilar,"%d.. degerde kaynak hatasi....%d\n",i,x);
		}
	}
	fclose(sayilar);
	y=islem1(y,toplam);
	fprintf(deneme,"deger....%d",y);
	fclose(deneme);
	printf("islem tamamlandi....");

	return 0;
}

int islem1(int a,unsigned short b)
{
	int c;
    for(int i=0;i<a;i++)
    {
        if(a%2==0)
        {
        b=b|a;	
		}
		else
		{
		b=~b;
		}
	}

	return b;
}

