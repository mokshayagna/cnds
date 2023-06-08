#include "stdio.h"

int isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return 1;
	else
		return 0;
}

int main()
{
	char x = 'A';
	int t = 0;

	t = isupper(x);
	printf("t :%d\n", t);
	if (t == 1)
		printf("%c is an UPPER charector\n", x);
	else
		printf("%c is NOT UPPER charector\n", x);

	return 0;
}
