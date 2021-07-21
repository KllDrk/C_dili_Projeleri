#include<stdio.h>
#include<string.h>
int main()
{
	char n[200];
	printf("yaz......");
	gets(n);
	for(int x=0;n[x]!='\0';x++)
	{
		if(n[x]<=122 && n[x]>=97)
		{
			n[x]=n[x]-32;
		}
		else if(n[x]<=90 && n[x]>=65)
		{
			n[x]=n[x]+32;
		}
	}
	printf("yazdigin seyin oynanmis hali...... \n %s ",n);
	return 0;
}
