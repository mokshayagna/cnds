#include<stdio.h>
int main()
{
	int a= 0x12131415,i;
//	short int *shp;
	char *pch;
	//shp=(short int*)&a;
	pch=(char*)&a;
//	printf("value of a =0x%x\n",a);
  //  printf("address of a=%p\n",&a);
//	printf("value in a =0x%x\n",*shp);
//	printf("value in a =0x%x\n",*(shp+1));
	for (i=0;i<sizeof (int);i++)
	{
		printf("%p : 0x%x\n", (pch+i),*(pch+i));
	}

	//printf("value of a =%p\n",*(pch+1));
	//printf("adress of a =%p\n",(pch+1));

	//printf("value of a =%p\n",*(pch+2));
	//printf("adress of a =%p\n",(pch+2));

	//printf("value of a =%p\n",*(pch+3));
	//printf("adress of a =%p\n",(pch+3));
	return 0;
}

