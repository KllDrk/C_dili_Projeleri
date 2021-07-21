#include <stdio.h>
#include <stdlib.h>

int main()
{
printf(
"    VVV     VVV\n"
"   VVVVV   VVVVV\n"
"  VVVVVVV VVVVVVV\n");
int i,j,k,x=19;
for(i=1;i<11;i++)
{

for(j=0;j<x;j++)
{
printf("V");
if(i==1 && j==8)
{
printf("v");
j=9;
}

}
printf("\n");
for(k=0;k<i;k++)
printf(" ");
x-=2;

}
return 0;
} 
