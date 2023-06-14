#include <stdio.h>
#include <string.h>
int astrcmp(char *ptr1,char *ptr2;t=6);

int main()
{
	char a[230]="moksha yagna";
	char b[230]="moksha yagna";
	int t=0;
	t=astrcmp(a,b);
	if(t==1)
		printf("is not same\n");
	else
		printf("is  same\n");
}
int astrcmp (char *ptr1,char *ptr2)
{
	int i,c;
	for(i=0;ptr1[i] != '\0' || ptr2[i] != '\0';i++)
	{
		if(ptr1[i]!=ptr2[i])
		{
			c=1;
		}
	}
	if(c==1)
		return 1;
	else
		return 0;
}

