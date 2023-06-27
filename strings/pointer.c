#include <stdio.h>
int main()
{
	int a=300;
	int b=400;
	int *p;

	p=&a;
	printf("value in a = %d\n" ,a);
	printf("address of a = %p\n",&a);
    printf("value of a = %d\n",*p);
	printf("address of a = %p\n",p);
    printf("value of a = %d\n",*&a);

	p=&b;
	printf("value in b = %d\n" ,b);
	printf("address of b = %p\n",&b);
    printf("address of b = %p\n",p);
    printf("value of b = %d\n",*p);
    printf("value of b = %d\n",*&b);
	return 0;
}





