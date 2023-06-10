#include <stdio.h>
int main()
{
	int ch='m';
	int t=0;
	t=islower(ch);
	if(t==1)
		printf("%c is lower",ch);
	else
		printf("%C is not lower",ch);
	return 0;
}
