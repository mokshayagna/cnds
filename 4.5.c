#include<stdio.h>

#define MAX 3
int magic_square()
{
	int a[MAX][MAX] = {{0}};
	int i=0, j=0, c = MAX/2, r=0;

	printf("Before init...\n");
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
	printf("\n");

	printf(" initalizing...\n");
	for(i=1;i<=MAX*MAX;i++)
	{
		a[r][c]=i;
		r--;
		c++;
		if(r<0&&c>=MAX)
		{
			r=r+2;
			c=c-1;
		}
		if(r<0)
		{
			r=MAX-1;
		}
		if(c>=MAX)
		{
			c=0;
		}
		if(a[r][c]!=0)
		{
			r=r+2;
			c=c-1;
		}
	}

	printf("after initaizing\n");
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}

int main ()
{
	magic_square();
	return 0;
}


