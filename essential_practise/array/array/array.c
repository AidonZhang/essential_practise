#include <stdio.h>

int main()
{
		long int a[2][10]={1,2,3,4,5,6,7,8,9,10};
		int i = 0;
		int j = 0;
		for(j=0;j<2;j++)
		{
				for (i=0;i<10;i++)
				{
						printf("a[%d][%d]=%d\n",j,i,a[j][i]);
				}
				printf("\n");
		}
	
		printf("sizeof array is %d\n", sizeof(a));
		getchar();
		return 0;
}