#include <stdio.h>
#include <malloc.h>

int main()
{
	typedef struct
	{
		int name;
		int age;
		int grade;
		int cless;
	}stu_info;

    stu_info  mem_stu1;
	stu_info  mem_stu2;

    /*�������������ռ�� stu1��stu2��*/
//	stu_info*  stu1 = (malloc(sizeof (stu_info)));
    //stu_info*  stu2 = (malloc(sizeof (stu_info)));
	stu_info*  stu1 = &mem_stu1;
	stu_info*  stu2 = &mem_stu2;

	/*�������ṹ�帳ֵ*/
	stu1->name = 21;
	stu1->age = 22;
	stu1->grade = 1;
	stu1->cless =2;

	stu2->name = 31;
	stu2->age = 32;
	stu2->grade = 3;
	stu2->cless =3;

    /*��ӡ stu1 �� stu2 ��Ԫ�ص�ֵ */ 
	printf("stu1 name is %d\n",stu1->name);
	printf("stu1 aage is %d\n",stu1->age);
	printf("stu1 grade is %d\n",stu1->grade);
	printf("stu1 cless is %d\n",stu1->cless);
    printf("\n\n");
	printf("stu2 name is %d\n",stu2->name);
	printf("stu2 aage is %d\n",stu2->age);
	printf("stu2 grade is %d\n",stu2->grade);
	printf("stu2 cless is %d\n",stu2->cless);
    
	/*�ͷ�malloc����Ŀռ�*/
	free(stu1);
	free(stu2);
	while(1)
	{
	}
	return 0;
}