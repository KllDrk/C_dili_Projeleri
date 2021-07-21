#include<stdio.h>
int main ()
{
	char n[200];
	int a, sayac=0 ;
    printf(
	"============== \n"
	"metni giriniz \n"
	"============== \n"
	"=>>");
	    gets(n);
    for(a=0;n[a]!='\0';a++){
       if(n[a]==' ' || n[a]==".")
       {
       	sayac++;
	   }
}
	   printf("================================= \n"
	   "yazida bulunan kelime sayisi=>>>> %d \n"
	   "================================="
	   ,sayac);
	   return 0;
}
