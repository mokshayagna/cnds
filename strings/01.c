#include <stdio.h>
#include <ctype.h>
#include "mydefs.h"
int test_is_chars_functions()
{
	int ch='M';
	int t=0;
	t = aisupper(ch);
	if(t==1)
		printf("%c is upper\n",ch);
	else
		printf("%c not upper\n",ch);
	t = aislower(ch);
	if(t==1)
		printf("%c is lower\n",ch);
	else
		printf("%c is not lower\n",ch);
	t = atoupper(ch);
	printf("%c to upper %c\n", ch, t);
	t = atolower(ch);
	printf("%c tolower %c\n", ch, t);
	return 0;
}

int test_strcmp()
{
	char a[256]="moksha yagna";
	char b[256]="moksha yagna";
	int t=0;

	t=astrcmp(a,b);
	if(t==1)
		printf("is not same\n");
	else
		printf("is  same\n");
}

int test_strncmp()
{
	char a[256]="moksha yagna";
	char b[256]="mokshA yagna";
	int t=0;

	t=astrncmp(a, b, 5);
	if(t==1)
		printf("is not same\n");
	else
		printf("is  same\n");
}
int test_strcasecmp()
{
	char a[256]="moksha yagna";
	char b[256]="moksha yagna";
	int t=0;

	t=astrcasecmp(a, b);
	if(t==1)
		printf("is not same\n");
	else
		printf("is  same\n");
}

int main()
{
	test_is_chars_functions();
	test_strcmp();
	test_strncmp();
	test_strcasecmp();
}
