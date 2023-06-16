int aisdigit (int ch)
{
	if(ch>='A' && ch<='z')
		return 1;
	else
		return 0;
}
#include<stdio.h>
#include<ctype.h>
{
	int ch='m';
	int t=0;
	t=aisdigit(ch);
	if(t==1)
		printf("%c is not digit",ch);
	else
		printf("%c is digit",ch);
	return 0;
}

