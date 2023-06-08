#include<stdio.h>
int main()
{
	int a[]={5,3,8,8,3,5,1,1};
	int i,j,k;
	int length = sizeof(a)/sizeof(a[0]);
	printf("array length: %d \n", length);
	for(i=0;i<=length-1;i++)
	{
		for(j=i+1;j<=length-1;j++)
		{
			if(a[i]==a[j])
				a[j]=0;
		}
	}
	for(k=0;k<=length;k++) 
	{
		printf("%d \n",a[k]);
	}
	return 0;
}

