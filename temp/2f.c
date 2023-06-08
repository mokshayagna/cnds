#include<stdio.h>

int main()
{
	int n=5,i,j=0;
	for(i=1;i<=n;i++)
	{
		j=factorial(i);
		printf("%d\n",j);
	}
	printf("\n");
	return 0;
}

