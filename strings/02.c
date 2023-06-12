#include <stdio.h>
int main()
{
	int ch='M';
	int t=0;
	t=atolower(ch);
	printf("%c with user defined to lower %c\n",ch,t);
	return 0;
}

int atolower(int ch)
{
	if (ch>='A' && ch<='Z')
		ch=ch+32;
	return ch;
}

