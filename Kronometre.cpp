#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    long zaman1,zaman2,basla;
	puts("baslamak icin entera bas\n");
    getchar();
    basla=time(0);

    while(1){

            zaman1=time(0);
            do
			{
                zaman2=time(0);
            }
			while(zaman2-zaman1<1); 
			{
				int t=(zaman2-basla)/60;
				
			printf("%d:%d \r",t,(zaman2-basla)%60);
		}           

    }                        
    return 0;
}

