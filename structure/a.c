#include "stdio.h"
#include "stru.h"

int main()
{
	struct s1 ss1;
	struct s2 ss2;
	struct s3 ss3;
	printf("ss1: size %ld\n",sizeof(ss1));
	printf("   i:%p,i:%p\n",&ss1.a, &ss1.b);
	printf("\n");

	printf("ss2: size %ld\n",sizeof(ss2));
	printf("   c:%p, c:%p, i:%p\n",&ss2.a, &ss2.b, &ss2.c);
	printf("\n");

	printf("ss3: size %ld\n",sizeof(ss3));
	printf("   c:%p, i:%p\n",&ss3.a, &ss3.b);
	printf("\n");
}
