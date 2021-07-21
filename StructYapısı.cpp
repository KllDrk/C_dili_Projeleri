#include<stdio.h>
#include<conio.h>
int islem1(int a , int b)
{
	a=a+b;
	return a;
}
typedef struct
{
	char ad[20];
	int yil;
	int no;
	int fiyat;
	int kazanc;
}kitap;
typedef struct
{
	char ad[20];
	kitap Kitap;
}kisi;

kisi y()
{
	kisi x[5];
	int i;
	int c=0,d=0;
	for(i=0;i<5;i++)
	{
		printf("%d.kisi adi.....",i+1);
		scanf("%s",&x[i].ad);
		printf("%d. kitap adi....",i+1);
		scanf("%s",&x[i].Kitap.ad);
		printf("%d. kitap yil....",i+1);
			scanf("%d",&x[i].Kitap.yil);
			printf("%d. kitap No....",i+1);
			scanf("%d",&x[i].Kitap.no);
			printf("%d. kitap fiyat....",i+1);
			scanf("%d",&x[i].Kitap.fiyat);
		    x[i].Kitap.kazanc=x[i].Kitap.fiyat;
		    d=d+x[i].Kitap.kazanc;
		    printf("===========================\n"
			"%d. kitap kazanci....%d\n"
			"===========================\n",i+1,d);
	        
	
		}
	
     }


int main()
{
	y();

	getch();
	return 0;
}
