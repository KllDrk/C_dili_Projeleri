#include<stdio.h>

int main(void)
{
	printf("%s\t",__DATE__);
	printf("%s\t",__TIME__);
	printf("%d",__STDC__);
	return 0;
}
