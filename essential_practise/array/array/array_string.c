#include <stdio.h>

int main(void)
{
	char str[]="AidonZhang";
	int i=0;
	int size = 2*sizeof(str);
	char *string = "BestAidonZhang";

	for (i=0;i<size;i++)
	{
		printf("第%d个元素是:%c\n",i,str[i]);
	}

	printf("the whole string is: %s\n",str);
	printf("the whole string2 is: %s\n",string);
	printf("the sizeof sting s: %d\n",sizeof(*string));
	printf("the sizeof stirng 2 is :%d",sizeof(string));
	return 0;
}
