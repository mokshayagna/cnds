#include <stdio.h>

int showbits(int a)
{
    int i;
	printf("%5d :",a);
    for(i = 7; i >= 0; i--)
    {
        int bit = (a >> i) & 1;
        printf(" %d", bit);
	}
	printf("\n");
}


