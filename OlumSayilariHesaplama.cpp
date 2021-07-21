#include<stdio.h>

int islem1(int ,int,int);
int islem2(int,int,int,int);

int main()
{
	int x,y,z,q;
	printf("ilk olum sayisini gir....");
	scanf("%d",&x);
	printf("son olum sayisi gir....");
	scanf("%d",&y);
	printf("gecen sureyi girin.....");
	scanf("%d",&z);
	printf("kacinci gunde tahmini olum  sayisi....");
	scanf("%d",&q);
	int a=islem1(x,y,z);
	int b=islem2(x,y,q,a);
	printf("gunde yaklasik olen kisi sayisi.....%d\n",a);
	printf("%d gunde olen kisi sayisi....%d",q,b);
	
	return 0;
}

int islem1(int a , int b, int c)
{
	if(b>=a)
	{
	b=b-a;
	b=b/c;
	}
	else
	{
	b=a-b;
	b=b/c;	
	}

	return(b);
}
int islem2(int a,int b,int c,int d)
{
	c=c*d;
	if(b>=a)
	{
	a=a+c;
	}
	else
	{
	a=b;
	a=a+c;	
	}
	return(a);
}
