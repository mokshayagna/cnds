#include "mydefs.h"
int astrncasecmp (char *ptr1, char *ptr2, int n)
{
	int i;

	for(i=0; ptr1[i] != '\0' || ptr2[i] != '\0' || i < n; i++)
	{
		if(atolower(ptr1[i]) != atolower(ptr2[i]))
		{
			return 1;
		}
	}
	return 0;
}


