#include <stdio.h>

#define test_fun_c 0;
//function declared
int fun(void);
int test_fun(void(* function)());
int sub_print(void);

																				//sub_function 1
																				//print string "sub_function
																				int sub_print(void)
																				{
																					printf("sub_print!\n");
																					return 0;
																				}

																				//sub_function 2
																				//print string "hello world
#define addr()  (&fun)()


int fun(void)
{
	printf("Hello world\n");
	return 0;
}
																					//#if test_fun_c
																					//sub_function 1
																					//call back function 
																					//int test_fun(void(* function)())
																					//{
 																						
																					//	function();
																					//	return 0;
																				//	}
typedef int (PFUN *)(void);																				//	#endif


int main(void)

{
																								//	#if test_fun_c
	PFUN pfun = NULL;																							//	test_fun(fun);
    
	pfun = fun;


																							//	#endif
	pfun();


	while(1) 
	{
		;
	}


	return 0;
}



