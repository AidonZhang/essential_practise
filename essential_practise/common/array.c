#include <stdio.h>

int main(void)

{

	//uint8 value;

	int array[10]={0};
	int (*ptr)[3] = NULL;

//	ptr = & array;
//	value = ptr[1][1];
printf("%d\n",array);
printf("%d\n",array+1);

printf("%d\n",&array);
printf("%d\n",&array+1);

printf("%d\n", ptr);
printf("%d\n", ptr+1);

	while(1)
	{
	 
	}
	return 0;
}