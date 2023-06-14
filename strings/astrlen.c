#include <stdio.h>
#include <string.h>
int astrlen (char *ptr);

int main()
{
	char a[230]="moksha";
    int len=0;
	//int i;
	//for(i=0;a[i]!='\0';i++);
	len=astrlen(a);
	printf("%d is the length of array\n",len);
}
int astrlen (char *ptr)
{
	int i;
	for(i=0;ptr[i]!='\0';i++);
	return i;
}
