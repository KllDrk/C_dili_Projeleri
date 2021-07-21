#include <stdio.h>
#include <stdlib.h>
 
int main(){
    
    int a, b1, b2, toplam = 0;
    
    printf("1. dizinin satir sayisi...... ");
    scanf("%d", &a);
    printf("1. dizinin sutun sayisi...... ");
    scanf("%d", &b1);
    printf("2. dizinin sutun sayisi...... ");
    scanf("%d", &b2);
    
    int dizi1[a][b1], dizi2[b1][b2], diziSonuc[a][b2];
    for(int c=0; c<a; c++)
	{
        for(int d=0; d<b1; d++)
		{
            printf("%dx%d)sayiyi giriniz..... ", c+1, d+1);
            scanf("%d", &dizi1[c][d]);
        }
    }
    printf("\n");
    
    
    for(int c=0; c<b1; c++)
	{
        for(int d=0; d<b2; d++)
		{
            printf("%dx%d)Sayiyi giriniz...... ", c+1, d+1);
            scanf("%d", &dizi2[c][d]);
        }
    }
    
    
    
    for(int c=0; c<a; c++)
	{  
        for(int d=0; d<b2; d++)
		{
            for(int e=0; e<b1; e++)
			{
                toplam += dizi1[c][e] * dizi2[e][d]; 
            }
            diziSonuc[c][d] = toplam; 
            toplam = 0;   
            printf("%d ", diziSonuc[c][d]);
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}
