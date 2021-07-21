/*
D�rt basamakl� bir say�n�n rakamlar�, ters yaz�l�p, 4 ile 
�arp�l�rsa, say�n�n kendisine e�it olmaktad�r. Bu program, 
bahsedilen d�rt basamakl� bu say�y� bulmaktad�r. 
*/
#include<stdio.h>
int main( void )
{
	//D�rt basamakl� bir say�n�n tersinin d�rt kat�na
	//e�it olmas�n� hesaplamam�z gerekti�inden, her 
	//basama�� ayr� ayr� d���nmemiz gerekmektedir. 
	//Bilinmeyen bu say�y�, abcd olarak d���nebiliriz.
	int a,b,c,d;
	int sayi, sayinin_tersi;
	for( a = 0; a < 10; a++ )
		for( b = 0; b < 10; b++ )
			for( c = 0; c < 10; c++ )
				for( d = 0; d < 10; d++ ) {
					//Burada sayinin degeri bulunmaktadir.
					sayi = a * 1000 + b * 100 + c * 10 + d;
					
					//Burada da sayinin tersi hesaplanmaktadir.
					sayinin_tersi = d * 1000 + c * 100 + b * 10 + a;
					
					//Sayinin tersinin 4 katinin ilk sayiya 
					//esit olup olmadigi kontrol ediliyor. 
					//Ayrica sayinin 0 olmamasi gerekmektedir.
					//Bu kontrol de yapilmaktadir.
					if( sayi == 4 * sayinin_tersi && sayi != 0 ) { 
					
						//Sayi ve uygun olan tersi gosterilir:
						printf( "Say�: %d, tersi: %d\n", sayi, sayinin_tersi );
						
						//return ifadesi programin daha fazla devam
						//etmemesi icin burada kullanilmistir. 
						//Program donguye devam etmez ve burada kesilir.
						//return, main fonksiyonunu sonlandirir.
						return 0;
					}
				}
	//Uygun bir sayi bulunamazsa, program burada sonlanacaktir.
	return 0;
}
