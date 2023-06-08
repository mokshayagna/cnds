#include "stdio.h"

int factorial(int x);

int main()
{
	int t = 0;
	int n = 5;
	t = factorial(n);
	printf("Factorial value of %d is %d\n", n, t);

	return 0;
}
