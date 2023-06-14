#include "mydefs.h"
int atoupper(int ch)
{
	if(aislower(ch)==1)
	//if(ch>='a' && ch<='z')
		ch = ch - 32;
	return ch;
}


