#include <stdio.h>
int main()
{
	int a= 0x12131415,i;
	short int *shp;
	shp=(short int*)&a;
	printf("value in a =0x%x\n",*shp);
	printf("value in a =0x%x\n",*(shp+1));
	return 0;
}
