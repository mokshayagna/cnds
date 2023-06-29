#include <stdio.h>
int showbits(int a);
int swapEvenOddBits(int n)
{
	int a, b, result,left,right;
	a = n & 0xAAAAAAAA;
	b = n & 0x55555555;
	left=a << 1;
	right=b >> 1;
	result = left | right;
	return result;
}
int main()
{
	int x= 10,t;
    showbits(x);
	t = swapEvenOddBits(x);
    showbits(t);
	printf("swapped number %d\n",t);
	return 0;
}






	
