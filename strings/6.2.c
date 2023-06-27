#include<stdio.h>
int main()
{
	int a= 0x12131415,i,ch1,ch2,ch3,ch4;
	char *pch;
	pch=(char*)&a;
	for (i=0;i<sizeof (int);i++)
	{
		printf("%p : 0x%x\n", (pch+i),*(pch+i));
	}
	//ch1=*(pch);
	//printf("value in ch1 =0x%x\n",ch1);
	//ch2=*(pch+1);
	//printf("value in ch2 =0x%x\n",ch2);
	//ch3=*(pch+2);
	//printf("value in ch3 =0x%x\n",ch3);
	//ch4=*(pch+3);
	//printf("value in ch4 =0x%x\n",ch4);
	return 0;
}


	

