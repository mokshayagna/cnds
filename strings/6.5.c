#include <stdio.h>
int main()
{
	int a=0x12131415,temp;
	short int *shp;
	shp = (short int*)&a;
	temp = shp[0];
	shp[0] = shp[1];
	shp[1] = temp;
	printf("swapped a is : 0x%x\n",a);
	return 0;
}
