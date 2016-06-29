#include <stdio.h>


struct TEST_ST
{
           int a;
           short b;
};

#define MY_SIZEOF_0(type) (size_t)((size_t)(((type *)0)+1) - (size_t)((type *)0))

#define MY_SIZEOF_1(temp) (size_t)((size_t)(&temp+1) - (size_t)(&temp))

int main(void)
{
         size_t size_0 = 0;
         size_t size_1 = 0;
         struct TEST_ST ST_A;
         
          int i = 0;
         int j = 0;
         
          j = sizeof(i++);//操作的时候i==0 ,操作完成之后i==1
         
          size_0 = MY_SIZEOF_0(struct TEST_ST);
         size_1 = MY_SIZEOF_1(ST_A);
         
          printf("size_0 = %u, size_1 = %u\n", size_0, size_1);
         printf ("i = %d, j = %d\n", i, j);
		// printf("length of short is %d",sizeof(TEST_ST->b));
		 while(1)
		 {
		 }
         
    return 0;
}
