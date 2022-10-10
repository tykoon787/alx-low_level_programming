#include <stdio.h>
#include "main.h"


void jack_bauer(void)
{
	int h = 0; // hour
	int m; // minute
	int i = 0; // Counter
	

	while (i != 24)
	{
		for(m = 0; m <= 59; m++)
		{
			printf("%d", h / 10);
			printf("%d", h % 10);
			printf(":");
			printf("%d", m / 10);
			printf("%d", m % 10); 
			printf("\n");
		}
	h++;
	i++; 
	/* m = 0; */
	}

}

int main(void)
{
	jack_bauer();
	return (0);
}
