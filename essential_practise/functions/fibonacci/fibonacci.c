#include <stdio.h>

long fibonacci (int n);

int main()
{
	int n;
	scanf("%d",&n);
	printf("fibonacci (%d) is %d", n,fibonacci (n));


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
