#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Graph {
  int dugum_sayisi;
  struct node** adjListesi;
};

struct node {
  int tepe;
  struct node* sonraki;
};

struct node* Node_Olustur(int);
struct Graph* Graph_Olustur(int);
void Txt_Deger_Okuma();
void Menu();
void Giris_Cikis_Deger_Hesapla();
void Kenar_Sayisi_Hesapla();
void Breadth_First_Search();
void graph_ekle(struct Graph* graph);
int insert_queue(int);
int Kuyruk_bos_mu();

int deger_sayisi;
int *pointer1,*pointer2,*pointer3;
int kenar_sayisi=0;
int geri=-1,ileri=-1;

int main() {
	Txt_Deger_Okuma();
	struct Graph* graph = Graph_Olustur(deger_sayisi);
	pointer2=(int *)malloc((deger_sayisi)*sizeof(int));
	pointer3=(int *)malloc((deger_sayisi)*sizeof(int));
	graph_ekle(graph);
	Menu();
    
  return 0;
}

void Menu()
{	
	int secim;
	printf("1-Giris-Cikis degerini hesaspla\n2-Toplam kenar sayisini hesapla.\n3-Breadth First Search Algoritmasina gore sirala\n");
	printf("5-Cikis\nSecim="),
	scanf("%d",&secim);
	switch(secim)
	{
		case 1:
			{
				Giris_Cikis_Deger_Hesapla();
				break;
			}
		case 2:
			{
				Kenar_Sayisi_Hesapla();
				break;
			}
		case 3:
			{

				Breadth_First_Search();
				break;
			}
		case 4:
			{
				printf("Programdan Cikiliyor...");
				exit(0);
				break;
			}
		default:
			{
				printf("Yanlis deger girdiniz.Lutfen bir daha deneyiniz.");
				break;
			}
	}
	
	Menu();
}

struct node* Node_Olustur(int v) {
  struct node* YeniNode = (struct node*)malloc(sizeof(struct node));
  YeniNode->tepe = v;
  YeniNode->sonraki = NULL;
  return YeniNode;
}

struct Graph* Graph_Olustur(int dugumler) {
  struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
  graph->dugum_sayisi = dugumler;
  graph->adjListesi =(struct node**)malloc(dugumler * sizeof(struct node*));
  for (int i = 0; i < dugumler; i++)
    graph->adjListesi[i] = NULL;
  return graph;
}

void Txt_Deger_Okuma()
{

	FILE *dosya=fopen("Odev.txt","r");
	int alan,i=0,sayi;
	
		while(!feof(dosya))
	{
		fscanf(dosya,"%d",&sayi);
		alan++;
	}
	fclose(dosya);
	pointer1=(int *)malloc(alan * sizeof(int));
	dosya=fopen("Odev.txt","r");
	while(!feof(dosya))
	{
		fscanf(dosya,"%d",&pointer1[i]);
		i++;
	}
	fclose(dosya);
	deger_sayisi=sqrt(alan);
}

void graph_ekle(struct Graph* graph)
{
	for(int i=0;i<deger_sayisi;i++)
	{
		for(int j=0;j<deger_sayisi;j++)
		{
			if(pointer1[i*deger_sayisi+j]==1)
			{
				struct node* YeniNode = Node_Olustur(i);
  				YeniNode->sonraki = graph->adjListesi[j];
  				graph->adjListesi[j] = YeniNode;
			}
		}
	}
}


void Giris_Cikis_Deger_Hesapla()
{
	int sayi;
	//0 giris 1 cikis
	int giris_cikis[2]={0,0};
	printf("Hangi sayinin giris-cikis degeri hesaplanacak?\n");
	scanf("%d",&sayi);
	int a=deger_sayisi*sayi;
		for(int j=0;j<deger_sayisi;j++)
		{
			if(pointer1[j+a]==1)
			{
				giris_cikis[0]++;
			}
			if(pointer1[deger_sayisi*j+sayi]==1)
			{
				giris_cikis[1]++;
			}

		}
		printf("%d. giris degeri=%d cikis degeri=%d\n",sayi,giris_cikis[0],giris_cikis[1]);
		giris_cikis[0]=0;
		giris_cikis[1]=0;
}

void Kenar_Sayisi_Hesapla()
{
	for(int i=0;i<deger_sayisi;i++)
	{
		for(int j=0;j<deger_sayisi;j++)
		{
			if(pointer1[i*deger_sayisi+j]==1)
			{
				kenar_sayisi++;
			}
		}
	}
		printf("kenar sayisi=%d\n",kenar_sayisi);
		kenar_sayisi=0;
}
void Breadth_First_Search()
{
	int deger;
	for(int i=0;i<deger_sayisi;i++)
	{
		pointer2[i]=1;
	}
	printf("hangi degerden baslatacaksiniz?");
	scanf("%d",&deger);
	insert_queue(deger);
	pointer2[deger]=2;
	int delete_item;
	while(!Kuyruk_bos_mu())
	{
		if(ileri == -1 || ileri > geri)
			{
				printf("Kuyruk tasti.\n");
				exit(1);
			}
	
	delete_item = pointer3[ileri];
	ileri = ileri+1;
	deger=delete_item;
	printf("%d ",deger);
		pointer2[deger] = 3;
		
		for(int i=0; i<deger_sayisi; i++)
		{
			if(pointer1[deger*deger_sayisi+i] == 1 && pointer2[i] == 1) 
			{
				insert_queue(i);
				pointer2[i] = 2;
			}
		}
	}
	printf("\n");
	geri=-1;
	ileri=-1;
	for(int i=0;i<deger_sayisi;i++)
	{
		pointer2[i]=0;
		pointer3[i]=0;
	}
}

int insert_queue(int deger)
{
	if(geri == deger_sayisi-1)
		printf("Kuyruk tastý.\n");
	else
	{
		if(ileri == -1) 
		{
		ileri = 0;	
		}
		geri = geri+1;
		pointer3[geri] = deger ;
	}
}

int Kuyruk_bos_mu()
{
	if(ileri == -1 || ileri > geri)
		return 1;
	else
		return 0;
}

