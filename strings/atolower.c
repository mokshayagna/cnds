#include "mydefs.h"

int atolower(int ch)
{
	if(aisupper(ch)==1)
	//if (ch>='A' && ch<='Z')
		ch=ch+32;
	return ch;
}

