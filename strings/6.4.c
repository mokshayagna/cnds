#include <stdio.h>
int main()
{
    int temp,a=0x12131415;
	char *pch;
    pch = (char*)&a;
	temp = pch[0];
	pch[0] = pch[3];
	pch[3] = temp;

	temp = pch[1];
	pch[1] = pch[2];
	pch[2] = temp;
	
	printf("swapped value of a is : %x\n",a);
	return 0;
}

