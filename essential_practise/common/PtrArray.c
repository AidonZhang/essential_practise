
#include<stdio.h> 
/*
//一维数组与指针的步长确定实验
int main(void)
{   
	
	int magic_value;

	int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int *ptr = (int *)(&array +1);
    magic_value = *(ptr-6) ;

    printf("The addr of array is %d\n", array);
    printf("The addr of array+1 is %d\n", array+1);
    printf("The addr of &array+1 is %d\n", &array+1);
   // printf("The addr of &(array+1) is %d\n",&(array+1));// ****  caculated but not exists
	printf("The addr of magic_value is %d\n", magic_value);

}
*/

/*
//2D 3D 数组与指针的 步长确定实验
int main(void)
{
	int array[3][4][3];
	int (*Ptr)[3];

	Ptr = (int (*)[3])array;
	printf("Ptr addr:%x\n",Ptr);
	printf("array = %x\n",array);

	printf("array+1addr == :%x\n",array+1);

	Ptr++;
    printf("Ptr++ addr:%x\n",Ptr);

	Ptr++;
    printf("Ptr++ addr:%x\n",Ptr);

	return 0;
}
*/

//2D指针数组步长，数组名实验
/*
//用于理解指针的例子

int main (void)
{


	int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int (*ptr)[4] = (int (*)[4])&array;//强制类型转换 &array也就就是取整个数组的步长

   //数组指针的步长是整个数组的大小，而且如果引用了没有初始化数组很可能导致异常，所以要引用的数组最好去初始化
// 这是一个用数组指针创建的2D数组
	printf("the value of ptr[1][2] is %x\n",ptr[1][2]);

	return 0;
	
}
*/
