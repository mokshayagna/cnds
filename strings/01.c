#include <stdio.h>
int main()
{
	int ch='m';
	int t=0;
	t=isupper(ch);
	if(t==1)
		printf("is upper");
	else
		printf("not upper");
	return 0;
}

