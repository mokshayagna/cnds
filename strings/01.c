#include <stdio.h>
#include <ctype.h>
#include "mydefs.h"
int main()
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

