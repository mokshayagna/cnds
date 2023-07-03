#include <stdio.h>
struct student
{
    int number;
    int marks;
	char gender;
};
int main()
{
	struct student s1;
	s1.number = 3;
    s1.marks = 94;
	s1.gender = 'm';
	printf("%d\n",s1.number);
	printf("%c\n",s1.gender);
	printf("%d\n",s1.marks);
	return 0;
}
