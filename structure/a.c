#include "stdio.h"
#include "stru.h"

int main()
{
	struct student1 s1;
	struct student2 s2;
	struct student3 s3;
	struct student4 s4;
	struct student5 s5;
	struct student6 s6;
	struct student7 s7;
	struct student8 s8;
	struct student9 s9;
	struct student10 s10;
	struct student11 s11;
	struct student12 s12;
	struct student13 s13;
	struct student14 s14;
	struct student15 s15;
	printf("s1: size %ld\n",sizeof(s1));
	printf("   i:%p,i:%p\n",&s1.a, &s1.b);
	printf("\n");

	printf("s2: size %ld\n",sizeof(s2));
	printf("   c:%p, c:%p, i:%p\n",&s2.a, &s2.b, &s2.c);
	printf("\n");

	printf("s3: size %ld\n",sizeof(s3));
	printf("   c:%p, i:%p\n",&s3.a, &s3.b);
	printf("\n");

	printf("s4: size %ld\n",sizeof(s4));
	printf("   c:%p, i:%p, c:%p\n",&s4.a, &s4.b, &s4.c);
	printf("\n");

	printf("s5: size %ld\n",sizeof(s5));
	printf("   i:%p,c:%p, i:%p, c:%p\n",&s5.a, &s5.b, &s5.c, &s5.d);
	printf("\n");

	printf("s6: size %ld\n",sizeof(s6));
	printf("   short:%p, i:%p, c:%p\n",&s6.a, &s6.b, &s6.c);
	printf("\n");
	
	printf("s7: size %ld\n",sizeof(s7));
	printf("   short:%p, short:%p, i:%p\n",&s7.a, &s7.b, &s7.c);
	printf("\n");

	printf("s8: size %ld\n",sizeof(s8));
	printf("   short:%p, c:%p, i:%p\n",&s8.a, &s8.b, &s8.c);
	printf("\n");


	printf("s9: size %ld\n",sizeof(s9));
	printf("   c:%p, short:%p, i:%p\n", &s9.a, &s9.b, &s9.c);
	printf("\n");

	printf("s10: size %ld\n",sizeof(s10));
	printf("   i:%p, c:%p, c:%p\n", &s10.a, &s10.b, &s10.c);
	printf("\n");

	printf("s11: size %ld\n",sizeof(s11));
	printf("   c:%p, c:%p\n", &s11.a, &s11.b);
	printf("\n");
	
	printf("s12: size %ld\n",sizeof(s12));
	printf("   c:%p, c:%p, c:%p\n", &s12.a, &s12.b, &s12.c);
	printf("\n");
	
	printf("s13: size %ld\n",sizeof(s13));
	printf("   short:%p, c:%p, c:%p\n", &s13.a, &s13.b, &s13.c);
	printf("\n");

	printf("s14: size %ld\n",sizeof(s14));
	printf("   c:%p, short:%p, c:%p\n", &s14.a, &s14.b, &s14.c);
	printf("\n");
	
	printf("s15: size %ld\n",sizeof(s15));
	printf("   c:%p, c:%p, short:%p\n", &s15.a, &s15.b, &s15.c);
	printf("\n");
}
