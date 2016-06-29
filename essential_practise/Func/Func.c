#include <stdio.h>

//typedef int (*PFUN)(void);

int fun(void)
{
    printf("Hello world\n");

	return 0;
}
/*int main(void)
{
    PFUN pfun_test = NULL;

    pfun_test = fun;

	pfun_test();

	return 0;

}*/
//函数名字并不会有一个真
int main(void)
{
    int (*pfun_test)(void);

    pfun_test = fun;

    pfun_test();
	(pfun_test)();
	(*pfun_test)();
	(*****pfun_test)();
	(*****************pfun_test)();
	printf("fun addr %x\n",fun);
	printf("fun addr %x\n",&fun);
	return 0;

}
