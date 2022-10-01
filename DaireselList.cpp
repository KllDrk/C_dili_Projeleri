#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

typedef struct List{
	char ad[20];
	char soyad[20];
	long int numara;
	struct List * next;
}list;

list *First = NULL,*Last = NULL,*Iter = NULL,*temp;

bool Menu();
void NumaraKontrol(long int);
void Ekle(long int);
void Listele();
void Arama();
	void AdArama(char *);
	void NumaraArama(long int);
void Siralama();
void Sil(long int silNumara);

bool kontrolEkle = false;

int main(){while(Menu());}

bool Menu(){
	int selection = 0;
	printf("1-Ekle\n"
		   "2-Listele\n"
		   "3-Arama\n"
		   "4-Siralama\n"
		   "5-Sil\n"
		   "6-Cikis\n"
		   "Selection:");
	scanf("%d",&selection);
	switch(selection){
		case 1:{
			long int numaraDegeri;
			printf("Numara gir:");
			scanf("%ld",&numaraDegeri);
				if(!kontrolEkle){Ekle(numaraDegeri);}
				else{NumaraKontrol(numaraDegeri);}
			getchar();
			getchar();
			break;
		}
		case 2:{
			Listele();
			getchar();
			getchar();
			break;
		}
		case 3:{
			Arama();
			getchar();
			getchar();
			break;
		}
		case 4:{
			Siralama();
			getchar();
			getchar();
			break;
		}
		case 5:{
			long int silNumara;
			printf("Numara Gir:");
			scanf("%ld",&silNumara);
			Sil(silNumara);
			getchar();
			getchar();
			break;
		}
		case 6:{
			return false;
			break;
		}
		default:{
			printf("Error\n");
			break;
		}
	}
	system("CLS");
	return true;
	
}

void NumaraKontrol(long int numaraDegeri){
	bool kontrol = true;
	Iter = First;
	printf("%ld-%ld\n",Iter->numara,numaraDegeri);
	if(numaraDegeri != First->numara){
		Iter = First->next;
	while(Iter != First){
		if(numaraDegeri == Iter->numara){
			printf("Bu numara %s-%s-%ld kayýdýnda bulunmaktadýr.\n",Iter->ad,Iter->soyad,Iter->numara);
			kontrol = false;
		}
		Iter = Iter->next;
	}
	if(kontrol){
		printf("Bu numara eklenebilir.\n");
		Ekle(numaraDegeri);
	}
	}else{
		printf("Bu numara %s-%s-%ld kayýdýnda bulunmaktadýr.\n",First->ad,First->soyad,First->numara);
	}
	
}

void Ekle(long int numara){
	kontrolEkle = true;
	temp = (list * )malloc(sizeof(list));
	printf("Ad gir:");
	scanf("%s",temp->ad);
	printf("SoyAd gir:");
	scanf("%s",temp->soyad);
	temp->numara = numara;
	temp->next =NULL;
	if(First == NULL){
		printf("1\n");
		temp->next = temp;
		Last = temp;
	}else if(Last == First){
		printf("2\n");
		temp->next = First;
		First->next = temp;
	}else{
		printf("3\n");
		temp->next = First;
		Last->next = temp;
	}
	First = temp;
}

void Listele(){
	Iter = First;
	printf("%s-%s-%ld\n",Iter->ad,Iter->soyad,Iter->numara);
	Iter = Iter->next;
	while(Iter != First){
		printf("%s-%s-%ld\n",Iter->ad,Iter->soyad,Iter->numara);
		Iter = Iter->next;	
	}
}

void Arama(){
	int selection;
	printf("1-Ada Göre Ara\n"
		   "2-Numaraya Göre Ara\n"
		   "Seçim:");
	scanf("%d",&selection);
	switch(selection){
		case 1:{
			char adArama[20];
			printf("Aranacak Adý Gir:");
			scanf("%s",adArama);
			AdArama(adArama);
			getchar();
			getchar();
			break;
		}
		case 2:{
			long int numara;
			printf("Numara Gir:");
			scanf("%ld",&numara);
			NumaraArama(numara);
			getchar();
			getchar();
			break;
		}
		default:{
			printf("Error!!!");
			break;
		}
	}
}

void AdArama(char * aramaAd){
	Iter = First;
	
	char ad2[20];
	char ad[20];
	int counter = 0,counterAd = 0;
	strcpy(ad2,aramaAd);
	strcpy(ad,Iter->ad);
			for(int i = 0; ad[i] != '\0'; i++){ counterAd++;}
			for(int i = 0 ; ad2[i] != '\0'; i++){ if(ad2[i] == ad[i]){counter++;}}
			if(counter == counterAd){printf("%s-%s-%ld\n",Iter->ad,Iter->soyad,Iter->numara);}
		counter = 0, counterAd = 0;
	Iter = Iter->next;
	while(Iter != First){
		strcpy(ad,Iter->ad);
			for(int i = 0; ad[i] != '\0'; i++){ counterAd++;}
			for(int i = 0 ; ad2[i] != '\0'; i++){ if(ad2[i] == ad[i]){counter++;}}
			if(counter == counterAd){printf("%s-%s-%ld\n",Iter->ad,Iter->soyad,Iter->numara);}
		counter = 0, counterAd = 0;
		Iter = Iter->next;
	}
}
void NumaraArama(long int aramaNumara){
	
	if(First->numara == aramaNumara){
		printf("%s-%s,%ld\n",First->ad,First->soyad,First->numara);
	}
	Iter = First->next;
	
	while(Iter != First){
		if(Iter->numara == aramaNumara){
		printf("%s-%s-%ld\n",Iter->ad,Iter->soyad,Iter->numara);
	}
		Iter = Iter->next;
	}
	
}

void Siralama(){
   int k=1,j;
   char str[2][100][100],s[2][100];
   long int strInt[100];
   Iter = First;
   strcpy(str[0][0],Iter->ad);
   strcpy(str[1][0],Iter->soyad);
   strInt[0] = Iter->numara;
   Iter = First->next;
   while(Iter != First){
   	strcpy(str[0][k],Iter->ad);
   	strcpy(str[1][k],Iter->soyad);
   	strInt[k] = Iter->numara;
   	k++;
   	Iter = Iter->next;
   }
   int iterNumara;
   for(int i=0;i<k;i++){
      for(j=i+1;j<k;j++){
         if(strcmp(str[1][i],str[1][j])>0){
         	strcpy(s[0],str[0][i]);
            strcpy(s[1],str[1][i]);
            
            strcpy(str[0][i],str[0][j]);
            strcpy(str[1][i],str[1][j]);
            
            strcpy(str[0][j],s[0]);
            strcpy(str[1][j],s[1]);
            
            iterNumara = strInt[i];
            strInt[i] = strInt[j];
            strInt[j] = iterNumara;
         }
      }
   }
   printf("\nSiralama:\n");
   for(int i=0;i<k;i++){
      printf("%s-%s-%ld\n",str[0][i],str[1][i],strInt[i]);
   }
}

void Sil(long int silNumara){
	if(First->numara == silNumara){
		printf("%s-%s-%ld\n",First->ad,First->soyad,First->numara);
		Iter = First->next;
		Last->next = Iter;
		free(First);
		First = Iter;
	}else if(First->next->numara == silNumara){
		printf("%s-%s-%ld\n",First->next->ad,First->next->soyad,First->next->numara);
		Iter = First->next;
		First->next= First->next->next;
		free(Iter);
	}
	Iter = First->next;
	
	while(Iter != First){
		if(Iter->next->numara == silNumara && Iter->next != Last){
		printf("%s-%s-%ld\n",Iter->ad,Iter->soyad,Iter->numara);
		Iter->next = Iter->next->next;
		free(Iter->next);
	}else if(Iter->next->numara == silNumara && Iter->next == Last){
		printf("%s-%s-%ld\n",Iter->ad,Iter->soyad,Iter->numara);
		Iter->next = First;
		free(Last);
		Iter = Last;
	}
		Iter = Iter->next;
	}
}
