#include<stdio.h>      
#include<stdlib.h> 
#include<math.h>
#include<conio.h>

//birinci degerin karesini ikinci degeri ekleyen denklemden ikinci degerin yanlis hatirlamiyosam
//fibonacci serisinden cikaran bir denklem elde ettim.x=5,y=4 için 4+5^2=29 ve 4=4+3+2+1=10 29-10=19....

int islem1(int , int);
int islem2(int ,int);
int main()
{
	int x,y,z;
	printf("bir deger gir....");
	scanf("%d",&x);
	printf("bir deger daha gir....");
	scanf("%d",&y);
	z=islem1(x,y);
	int c1=islem2(z,y);
	printf("\nsonuc.....%d....%d",z,c1);
	return 0;
	
}

int islem1(int a,int b)
{
	int c=0;
	int alpha=0,betha=0;
	for(int i=0;i<a;i++)
	{
	    b=b+a;
	    alpha++;
	    if(a==b)
	    {
	    	for(int j=0;j<b;j++)
	    {
	        b=b-1;
		    a=a+1;	
	        betha++;
	        printf("\nkonveksiyon degerler....%d",betha);
		}
		}
	   printf("\nelemental degerler....%d....%d.....%d",alpha,a,b); 
	}
	return(b);
}
int islem2(int a,int b)
{
	int c=0;
	int alpha=0,betha=0;
	for(int i=0;i<a;i++)
	{
		alpha++;
		for(int j=0;j<b;j++)
		{
			a=a-b;
			b=b-1;
			betha++;
			printf("\nkonvak deger....%d",betha);
			c=c+betha;
			printf("\ntoplam da cikarilan deger....%d\n",c);
			
		}
		printf("\ndegerlik kümesi....%d....%d....%d",alpha,a,b);
	}
	return(a);
}
