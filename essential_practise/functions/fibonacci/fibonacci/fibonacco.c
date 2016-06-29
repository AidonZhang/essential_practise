#include <stdio.h>

long fibonacci (int n);

int main()
{
		int n;
		int i =1;
		for ( i; i++;i<5)
		{		scanf("%d",&n);
				printf("fibonacci (%d) is %d\n", n,fibonacci (n));
				printf("size of fibonacci (%d) is %d\n", n,sizeof(fibonacci (n)));
				printf("size of%d is %d\n", n,sizeof(n));
		}


		while(1)
		{
			
			}
		return 0 ;	
}
	
long fibonacci (int n)
{
		long result;
		long previous_result;
		long next_older_result;
				
		result = previous_result = 1;
				
		while(n>2)
		{
				n -=1;
				next_older_result =  previous_result;
				previous_result = result;
				result = previous_result + next_older_result;
							
					
		}
		return result;
}
