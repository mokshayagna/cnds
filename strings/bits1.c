#include <stdio.h>
int main()
{
	int a=10;
	int n=4;
    int mask = 0, result;
    mask = 1 << (n-1);
    result = a & mask;
	printf(" %d ",result);
    if (result != 0)
		printf("1 ");
    else
		printf("0 ");
	return 0;
}
