#include <stdio.h>

// 0 0 0 0 1 0 1 0 - a
// 0 0 0 0 0 0 1 0 - m1
// 0 0 0 0 1 0 0 0 - m2
int showbits(int a)
{
	int i;
	for(i=7;i>=0;i--)
	{
		int bit = (a>>i)&1;
		printf("%d",bit);
	}

	//m1 = 1 << 1;
	//m2 = 1 << 3;
	//mask = m1 | m2;
	//return mask;
}

int main()
{
    int x = 10, mask;
    mask = showbits(x);
    printf("binary representation %d",x);
    
    return 0;
}





