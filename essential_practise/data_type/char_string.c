#include <stdio.h>

/*
int main(void)
{

	char str1 = "aabcdefg";
	char str2 = 'a';

	printf("char str1 is %s\n",str1);
	printf("char str2 is %c\n",str2);

	while (1)
	{
	;
	}

	return 0;

}
*/
int main()   
{   
    char c, s[20];   
    int a=1234;  
    float f=3.141592653589;   
    double x=0.12345678912345678;   
    strcpy(s, "Hello,World");   
    c='\x41';   
    printf("a=%d\n", a);//����ʮ����������ʽ�������ʾ a=1234  
    printf("a=%d%%\n", a);//���%�� ��� a=1234%  
    printf("a=%6d\n", a);//���6λʮ�������� ��߲��ո���ʾ a= 1234  
    printf("a=%06d\n", a);//���6λʮ�������� ��߲�0����ʾ a=001234  
    printf("a=%2d\n", a);//a����2λ����ʵ����� a=1234  
    printf("a=%-6d\n", a);///���6λʮ�������� �ұ߲��ո���ʾ a=1234  
    printf("f=%f\n", f);//��������Ч������7λ����� f=3.141593  
    printf("f=%6.4f\n", f);//���6�У�С�����4λ����� f=3.1416  
    printf("x=%lf\n", x);//����������� x=0.123457  
    printf("x=%18.16lf\n", x);//���18�У�С�����16λ��x=0.1234567891234567  
    printf("c=%c\n", c);     //����ַ� c=A  
    printf("c=%x\n", c);//��ʮ����������ַ���ASCII�� c=41  
    printf("s[]=%s\n", s);//��������ַ���s[]=Hello,World  
    printf("s[]=%0.9s\n", s);//������9���ַ����ַ��� s[]=Hello,Wor  

	while (1)
	{
		;
	}
    return 0; 
}