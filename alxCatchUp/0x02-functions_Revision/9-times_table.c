#include <stdio.h>

int main(void)
{
	int i, j; 
	int n =9 ;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <=n; j++)
		{
			printf("%d,  ", i*j);
		}
		putchar('\n');
	}
	return (0);
}
