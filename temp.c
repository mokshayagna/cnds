
#include<stdio.h>
int main()
{
    int n=3,i=1,j=1,k=1;
    int m=3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
		{
			printf(" ");
		}
		{
			
            for(k=1;k<=m;k++)
               printf("%d",k);
        }
        m--;
        printf("\n");
    }
    return 0;
}
