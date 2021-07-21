#include<stdio.h>
#include<stdlib.h>

int main()
{
	//kullanýcýdan deðer alýyorumi
    int sayi;
	int i=0,j=0;
	int *A ,*B;
	//bellekten yer ayýrtýyorum.
	A = (int*)malloc(1*sizeof(int));
	B = (int*)malloc(1*sizeof(int));
	/*asýl döngüyü baþlatmak ve asýl sayýlarý
	 kontrol ettirmek  için herhangi bir
	 deger alýyorum.Ben bu degeri bir yaptým.
	 */
	printf("Denklemi Baslatmak icin 1 giriniz.\n");
	scanf("%d",&sayi);
while(sayi!= 0 )
{
	//asýl döngü burada baþlýyor.
	printf("sayi giriniz\n");
	scanf("%d",&sayi);
	//teklik çiftlik için burada if ile kotnrol ettiriyorum.
	if(sayi!=0 && sayi%2==0)
	{  
	//burada daha fazla alan kullanabilmek için deðerini bir arttýrýyorum.
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
/*burada ise elde etttiðim sayýlarý
 sonradan ekrana yazdýrmak için farklý
  bir döngü kullanýyorum.*/
    printf("Tek Sayilar\n");
 
    for(int c=0;B[c]!='\0';c++)
    {
    	//burada ekrana tek tek deðerler yazdýrýlýyor.
    	printf("%d\n",B[c]);
	}
	
    printf("cift Sayilar\n");
    
    for(int d=0;A[d]!='\0';d++)
    {
    	printf("%d\n",A[d]);
	}
	//iþim bittiði için ve belleði temizlemek için free fonksiyonu kullanýyorum.
	free(A);
	free(B);
	

return 0;

}
