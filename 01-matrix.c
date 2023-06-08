#include "stdio.h"

int single_d_array()
{
	int a[10] = {};
	int i = 0;

	printf("Before init...\n");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("Intializing...\n");
	for(i = 0; i < 10; i++)
	{
		a[i] = 10*i;
	}

	printf("After Init...\n");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");


	return 0;
}

int double_d_array()
{
	int a[5][5] = {{0}};
	int i = 0, j = 0;

	printf("Before init...\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	printf("\n");

	printf("Intializing...\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
			a[i][j] = 2*(i+1)*(j+1);
	}

	printf("After Init...\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	printf("\n");

	return 0;
}

int main()
{
	//single_d_array();
	double_d_array();
	return 0;
}

