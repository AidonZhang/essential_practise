#include <stdio.h>

struct stu_0
{
	int para_1;
	int para_2;
	int para_3;
} stu_tag;

union union_1
{
	int para_1_;
	int para_2_;
	int para_3_;
}union_tag;


int main(void)
{
    union union_1 union_111;

	printf("%d is the size of stuctrue\n",sizeof(stu_tag));
	printf("%d is the size of union\n",sizeof(union_tag));

return 0;
}