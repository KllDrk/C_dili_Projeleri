#include<stdio.h>
#include<stdlib.h>

int main()
{
	//kullan�c�dan de�er al�yorumi
    int sayi;
	int i=0,j=0;
	int *A ,*B;
	//bellekten yer ay�rt�yorum.
	A = (int*)malloc(1*sizeof(int));
	B = (int*)malloc(1*sizeof(int));
	/*as�l d�ng�y� ba�latmak ve as�l say�lar�
	 kontrol ettirmek  i�in herhangi bir
	 deger al�yorum.Ben bu degeri bir yapt�m.
	 */
	printf("Denklemi Baslatmak icin 1 giriniz.\n");
	scanf("%d",&sayi);
while(sayi!= 0 )
{
	//as�l d�ng� burada ba�l�yor.
	printf("sayi giriniz\n");
	scanf("%d",&sayi);
	//teklik �iftlik i�in burada if ile kotnrol ettiriyorum.
	if(sayi!=0 && sayi%2==0)
	{  
	//burada daha fazla alan kullanabilmek i�in de�erini bir artt�r�yorum.
	i=i+1; 
	A =(int *)realloc(A,i*sizeof(int));
    //diziye sayiyi ekliyorum.
	A[i] = sayi;
	}
	if(sayi!=0 && sayi%2==1)
	{
	j=j+1;
	B =(int*)realloc(B,j*sizeof(int));

	B[j] = sayi;
	}
}
/*burada ise elde ettti�im say�lar�
 sonradan ekrana yazd�rmak i�in farkl�
  bir d�ng� kullan�yorum.*/
    printf("Tek Sayilar\n");
 
    for(int c=0;B[c]!='\0';c++)
    {
    	//burada ekrana tek tek de�erler yazd�r�l�yor.
    	printf("%d\n",B[c]);
	}
	
    printf("cift Sayilar\n");
    
    for(int d=0;A[d]!='\0';d++)
    {
    	printf("%d\n",A[d]);
	}
	//i�im bitti�i i�in ve belle�i temizlemek i�in free fonksiyonu kullan�yorum.
	free(A);
	free(B);
	

return 0;

}
