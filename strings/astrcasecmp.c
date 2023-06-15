int astrcasecmp (char *ptr1, char *ptr2)
{
	int i,ch1,ch2;

	for(i=0; ptr1[i] != '\0' || ptr2[i] != '\0'; i++)
	{
		ch1=atolower(ptr1[i]);
		ch2=atolower(ptr2[i]);
		if(ch1!= ch2)
		{
			return 1;
		}
	}
	return 0;
}


