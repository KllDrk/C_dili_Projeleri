#include <conio.h>
#include <stdio.h>
struct Kitap{
	char ad[20];
	int no;
	int yil;
	float fiyat;
	float kazanc;
};
struct Kisi{
	char ad[20];
	struct Kitap kitap;
};
Kisi bilgialma(Kisi x)
{
	float b;
	printf("Musterinin Adi.                  ");
	fflush(stdin);
	gets(x.ad);
	printf("Alinan Kitabin Adi.              ");
	fflush(stdin);
	gets(x.kitap.ad);
	printf("Alinan Kitabin Basim Yili.       ");
	scanf("%d",&x.kitap.yil);
	printf("Alinan Kitabin Numarasi.         ");
	scanf("%d",&x.kitap.no);
	printf("Alinan Kitabin Fiyati.           ");
	scanf("%f",&x.kitap.fiyat);
	x.kitap.kazanc=x.kitap.fiyat;
	return x;
}
int main()
{
	int i;
	float top=0;
	Kisi kisi[5];
	for(i=0;i<5;i++)
	{
		kisi[i]=bilgialma(kisi[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n\n\n\n Musteri Adi = %s \n",kisi[i].ad);
		printf(" Kitap Adi = %s \n",kisi[i].kitap.ad);
		printf(" Basim Yili = %d \n",kisi[i].kitap.yil);
		printf(" Numarasi = %d \n",kisi[i].kitap.no);
		printf(" Kitap Fiyati = %0.2f \n",kisi[i].kitap.fiyat);
		top+=kisi[i].kitap.kazanc;
		printf(" Kazanc = %0.2f \n",top);
	}
	getch();
	return 0;
}


