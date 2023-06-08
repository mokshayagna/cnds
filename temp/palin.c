#include<stdio.h>
int main()
{
	int i,j,n=5,flag=0;
	for(i=1;;i++)
	{
		printf("%d,",i);
		if(i==n)
		{
			for(j = n-1;j>=1;j--)
				printf("%d,",j);
			flag=1;	
			break;
		}
		if(flag==1)
			break;
	}
	printf("\n \n");
	return 0;
}
