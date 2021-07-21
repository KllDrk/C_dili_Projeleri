#include <stdio.h>
#include <conio.h>

int main(){
    int satir, sutun, satirSay = 0, sutunSay = 0;
    printf("Kac satir?: ");
    scanf("%d", &satir);
    printf("Kac Sutun?: ");
    scanf("%d", &sutun);
    int matris[satir][sutun];

    for(satirSay = 0; satirSay < satir; satirSay++){
        for(sutunSay = 0; sutunSay < sutun; sutunSay++){
            printf("%d satir %d sutun: ",satirSay+1,sutunSay+1);
            scanf("%d", &matris[satirSay][sutunSay]);
            printf("\n");
            }
        }

    for(satirSay = 0; satirSay < satir; satirSay++){
        for(sutunSay = 0; sutunSay < sutun; sutunSay++){
            printf("%3d", matris[satirSay][sutunSay]);
            }
        printf("\n");
        }

    //2.matrisin bilgileri//
    
    int sutun1;
    printf("Ikinci matris icin: \n\n Satir sayisi birinci matrisin sutun sayisina esit olacagi icin sormuyoruz \n\n Kac Sutun?: ");
    scanf("%d", &sutun1);
    int matris1[satir][sutun1];

    for(satirSay = 0; satirSay < sutun; satirSay++){
        for(sutunSay = 0; sutunSay < sutun1; sutunSay++){
            printf("%d satir %d sutun: ",satirSay+1,sutunSay+1);
            scanf("%d", &matris1[satirSay][sutunSay]);
            printf("\n");
            }
        }

    for(satirSay = 0; satirSay < sutun; satirSay++){
        for(sutunSay = 0; sutunSay < sutun1; sutunSay++){
            printf("%3d", matris1[satirSay][sutunSay]);
            }
        printf("\n");
        }

    printf("\nCarpma islemi sonucu:\n");
    int sayac, satirSayac, sutunSayac, deger;
    int sonucMatrisi[satir][sutun1];
    for(satirSayac = 0; satirSayac<satir; satirSayac++){
        for(sutunSayac = 0; sutunSayac<sutun1; sutunSayac++){
            deger = 0;
            for(sayac = 0; sayac<sutun; sayac++){
                deger += matris[satirSayac][sayac]*matris1[sayac][sutunSayac];
                }       
            sonucMatrisi[satirSayac][sutunSayac] = deger;
            }

    }

    for(satirSay = 0; satirSay < satir; satirSay++){
        for(sutunSay = 0; sutunSay < sutun1; sutunSay++){
            printf("%3d", sonucMatrisi[satirSay][sutunSay]);
            }
        printf("\n");
        }

    getch();
    return 0;
}
