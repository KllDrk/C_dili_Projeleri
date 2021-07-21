#include<stdio.h>
#include<math.h>
#include<conio.h>

int fonksiyon_1(int);
int fonksiyon_2(int,int);

int main()
{
	int deger,ust_sinir,sayac_1=0,sayac_2=0;
	
	printf("üçgenin bir kenarini yaziniz.");
	scanf("%d",&deger);
	
	printf("\nust sinir nereye kadar olacak?");
	scanf("%d",&ust_sinir);
    
    	for(int i=1;i<deger;i++)
	{
		float b,k;
		int d,e,f;
		e=deger*deger;
		d=i*i;
		b=e-d;
		b=sqrt(b);
		k=b;
		for(;0<b;)
		{
			b=b-1;
		}
		if(b==0 && k!=0)
		{
			f=sqrt(e-d);
			printf("eger ucgenin hipotenusu olsaydi\nkenar_1...\tkenar_2...\n%d\t\t%d\n",f,i);
			sayac_1++;
		}
	}
	if(sayac_1==0)
	{
		printf("maalesef oyle bir kenar yok...\n");
	}
	
	
		for(int i=deger;i<=ust_sinir;i++)
	{
	float b,k;
	int d,e,f;
	e=deger*deger;
	d=i*i;
	b=d-e;
	b=sqrt(b);
	k=b;
		for(;0<b;)
		{
			b=b-1;
		}
	if(b==0 && k!=0)
	{
		f=sqrt(d-e);
		printf("eger ucgenin bir kenari olsaydi\ndiger kenar\thipotenus...\n%d\t\t%d\n",f,i);
		sayac_2++;
	}	
    }
    if(sayac_2==0)
    {
    	printf("maalesef oyle bir kenar yok...\n");
	}
	getch();
    return 0;
    
}






