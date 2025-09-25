#include <stdio.h>
#include <stdlib.h> 

int main(int ac, char **av)
{
	int d;
	int num; 

	d = 2; 
	if (ac == 2)
	{
		num = atoi(av[1]);
		if (num == 1)
			printf("1");
		while (d <= num)
		{
			if (num % d == 0)
			{
				printf("%d", d);
				if (num != d)
					printf("*");
				num = num / d;
			}
			else
				d++;
		}
	}
	printf("\n");
	return (0);
}
