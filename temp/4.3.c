#include <stdio.h>
int main()
{
	int i,j,b,k;
	int a[]={21,28,22,5,1,3};
	int length = sizeof(a)/sizeof(a[0]);
	for(i=0;i<=length-1;i++)
	{
		for(j=i+1;j<=length-1;j++)
		{
			if(a[i]>a[j])
			{
				b=a[i];
			    a[i]=a[j];
				a[j]=b;
			}
		}
	}
	for(k=0;k<=length;k++)
	{
		printf("%d\n",a[k]);
	}
	return 0;
}
