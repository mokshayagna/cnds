int astrcmp (char *ptr1, char *ptr2)
{
	int i;

	for(i=0; ptr1[i] != '\0' || ptr2[i] != '\0'; i++)
	{
		if(ptr1[i] != ptr2[i])
		{
			return 1;
		}
	}
	return 0;
}


