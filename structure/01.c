#include <stdio.h>
#include <string.h>
struct student
{
    //char name;
    int number;
    //int marks;
	char gender;
};
int main()
{
	struct student s1;
	struct student *ps;
	//printf("address %d\n",ps);
	//printf("size %ld\n",sizeof(s1));
	printf("size of number: %ld\n",sizeof(s1.number));
	printf("size of name : %ld\n",sizeof(s1.name));
	printf("size of marks: %ld\n",sizeof(s1.gender));
	
	printf("size %ld\n",sizeof(s1));
	ps = &s1;
	ps->number = 300;
    //ps->marks = 94;
	ps->gender = 'm';
    strcpy(ps->name, "S");
	printf("%d\n",s1.number);
	printf("%s\n",s1.name);
	printf("%d\n",s1.gender);
	return 0;
}
