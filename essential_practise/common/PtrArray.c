
#include<stdio.h> 
/*
//һά������ָ��Ĳ���ȷ��ʵ��
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
//2D 3D ������ָ��� ����ȷ��ʵ��
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

//2Dָ�����鲽����������ʵ��
/*
//�������ָ�������

int main (void)
{


	int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int (*ptr)[4] = (int (*)[4])&array;//ǿ������ת�� &arrayҲ�;���ȡ��������Ĳ���

   //����ָ��Ĳ�������������Ĵ�С���������������û�г�ʼ������ܿ��ܵ����쳣������Ҫ���õ��������ȥ��ʼ��
// ����һ��������ָ�봴����2D����
	printf("the value of ptr[1][2] is %x\n",ptr[1][2]);

	return 0;
	
}
*/
