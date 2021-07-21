#include<stdio.h>
#include<stdlib.h>

int tekrarlama1(int,int);

int tekrarlama2(int,int);

int tekrarlama3(int,int);

int tekrarlama4(int,int);

int tekrarlama5(int,int);

int sorgulama(int,int ,int);

int m , sayac1;

char u;

int main()
{
    m:
	int x,y,z,zorluk_seviyesi;
	
	printf("zorluk seviyesi..."
	"(zorluk derecesi 1-5 degerligi arasindadir ve kolaydan zora dagru ilerler)");
	scanf("%d",&zorluk_seviyesi);
	printf("sayi giriniz...");
	scanf("%d",&x);
    z=x;
    y=sorgulama(zorluk_seviyesi,x,z);
    
	if(y>x)
	{
	    printf("sayiniz %d birim kadar kucuktur.\n",y-x);
	}
	else if(x>y)
	{
	    printf("sayiniz %d birim kadar buyuktur.\n",x-y);
	}
	else
	{
		printf("dogru sayiyi buldunuz!\n");
		
	}
	printf("oynamaya devam etmek ister misin?(katılmak icin e oyunu bitirmek icin h "
	"yapman yeterli)\n");
	scanf("%s",&u);
	if(u=='e')
	{
		goto m;
	}
    if(u=='h')
	{
		printf("oyun bitmistir.Tesekkurler...");
	return 0;
	}
}
int sorgulama(int a,int b , int c)
{
	switch(a/1)
	{
		case 1:
			{
			tekrarlama1(b,c);
			}
		case 2:
		    {
		    tekrarlama2(b,c);
			break;	
			}
		case 3:
		    {
		    tekrarlama3(b,c);
			break;	
			} 
		case 4:
		    {
			tekrarlama4(b,c);
			break;
		    } 
		case 5:
		    {
			tekrarlama5(b,c);
		    }
		return 0;
	}
}
int tekrarlama5(int a,int c)
{
		a=rand()%50;
	int b=rand()%15+1;

	if(a<=25)
	{
	a=a+b;
	}
	if(a>25)
	{
		a=a/2;
	}
	if(a==c)
	{
		a=a+1;
	}
	return a;
}
int tekrarlama1(int a,int c)
{
	sayac1++;
	c=rand()%20;
	int b=rand()%3+1;

	if(c<=10)
	{
	c=c+b;
	}
	if(c>10)
	{
		c=c/2;
	}
	if(sayac1==3)
	{
		c=a;
	}
	return c;
}

int tekrarlama2(int a, int c){
	
}

int tekrarlama3(int a, int c){
	
}
int tekrarlama4(int a, int c){
	
}
