#include <stdio.h>
int main()
{
	int i,j,k,m;
	int a[]={1,2,3,5,3,6,3};
	int length = sizeof(a)/sizeof(a[0]);
	printf("length is: %d \n", length);
	for(i=0;i<=length-1;i++)
	{
		for(j=i+1;j<=length-1;j++)
		{
			if(a[i]==a[j] && a[j]<length)
			{
				printf("if condition");
				a[j]=a[j+1];
			}
			else if (a[i] == a[j])
			{
				printf("else condition");
				a[j]=a[j+1];
				length--;
			}
		}
	}
	printf("length:  %d\n", length);
	for(k=0;k<=length;k++)
	{
		printf("%d\n",a[k]);
     }
	return 0;
}
