#include<stdio.h>
int islem1(int,int,int,int);
int islem2(int,int,int,int);
int main()
{
	int x,y,z,f;
	printf("gunu yaz....");
	scanf("%d",&x);
	printf("ayi yaz.....");
	scanf("%d",&y);
	printf("yili yaz....");
	scanf("%d",&z);
	printf("girmek istedigin yili yaz....");
	scanf("%d",&f);
	int b=islem1(x,y,z,f);
	int a=islem2(x,y,z,f);
	printf("basvuru icin kalan gün sayisi.....%d \n sinavin baslama gün sayisi....%d",a,b);
}
int islem1(int a, int b ,int c,int d)
{
   a=30-a;
   a=21+a; 
if(b>=6)
{
	b=b-6;
	b=12-b;
	
}
else
{
	b=6-b;
}
if(d>=c)
{
    c=0;	
}
else
{
	c=d-c;
	
}
   int k=0;
   k=k+a;
   b=b*30;
   k=k+b;
   c=c*365;
   k=k+c;
   if(k<0){
   	k+=365;
   }
   return k ;

}
int islem2(int a ,int b,int c,int d)
{
	int k=0;
	a=30-a;
	a=3+a;
	if(b>=3)
	{
		if(d>c)
		{
			b=b-4;
			b=12-b;
			k=k+a;
			b=30*b;
			k=k+b;
			c=d-c;
			c=365*c;
			k=365-k;
			k=k+c;
			return 0;
			
		}
		else
		{
			c=d-c;
			c=365*c;
			b=b-4;
			b=30*b;
			k=k+a;
			k=k+b;
			k=k+c;
			return k;
			
		}
	}
	if(d>c)
		{
			b=2-b;
			b=12-b;
			k=k+a;
			b=30*b;
			k=k+b;
			c=d-c;
			c=365*c;
			k=365-k;
			k=k+c;
			return 0;
			
		}
		else
		{
			c=d-c;
			c=365*c;
			b=2-b;
			b=30*b;
			k=k+a;
			k=k+b;
			k=k+c;
			return k;
			
		}
}
