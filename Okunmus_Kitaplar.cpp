#include<stdio.h>

int main()
{
	FILE *Okunmus_Kitaplar=fopen("Okunmus_Kitaplar.doc","a");
	char x[200];
	int y;
	printf("kac kitap yazacaksiniz...\n");
	scanf("%d",&y);
	
	for(int i=0;i<y;i++)
	{
	printf("kitap ismi...");
	scanf("%s",&x);
    fprintf(Okunmus_Kitaplar,"%s\n",x);
	}

	
	fclose(Okunmus_Kitaplar);
	return 0;
	
	
}
