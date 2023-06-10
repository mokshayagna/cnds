#include<stdio.h>
#include<ctype.h>

int atoupper(int ch)
{
	if(ch>='a' && ch<='z')
		ch = ch - 32;
	return ch;
}

int main()
{
	int ch = 'B';
	int t=0;

	t = toupper(ch);
	printf("%c with lib toupper %c\n", ch, t);

	t = atoupper(ch);
	printf("%c with user defined toupper %c\n", ch, t);
	return 0;
}

