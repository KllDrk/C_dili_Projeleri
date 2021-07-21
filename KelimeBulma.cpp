#include<stdio.h>
#include<string.h>
int main()
{ 
	char a[200];
	char b[50];
	int f,d,son,c,e;
	printf("=========================== \n"
	"yazmak istedigini yaz..... \n"
	"=========================== \n");
	gets(a);
	printf("================================= \n"
	"bulmak istedigin bir sey gir..... \n"
	"================================= \n");
	gets(b);
	for(int ilk=0;ilk<strlen(a);ilk++)
	{
		if(a[ilk]==b[0])
		{
		d=ilk;
		f=0;
		for(e=0;e<strlen(b);e++)
		{
			if(a[d]==b[e])
			{
				f++;
			}
			son=ilk+e;
			d++;
		}
		if(strlen(b)==f)
		{
			c=1;
			printf("%d. den %d e kadar ayni \n",ilk,son);
		}
    }
	}
	if(strlen(b)!=f && c!=1)
	{
		printf("=======!!!!!======= \n"
		"Bulamadim :( \n"
		"=======!!!!!=======");
	}
	return 0;
}
