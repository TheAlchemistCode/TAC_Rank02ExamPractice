#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0, array[256] = {};
	char *str1 = av[1];
	char *str2 = av[2];

	if(ac == 3)
	{
		while(str1[i])
			array[(int)str1[i++]] = 1;
		i = 0;

		while(str2[i])
			array[(int)str2[i++]] = 1;
		i = 0;

		while(str1[i])
			{
				if(array[(int)str1[i]])
				{
					write(1, &str1[i], 1);
					array[(int)str1[i]] = 0;
				}
				i++;
			}
		i = 0;

		while(str2[i])
			{
				if(array[(int)str2[i]])
				{
					write(1, &str2[i], 1);
					array[(int)str2[i]] = 0;
				}
				i++;
			}
		i = 0;
	}
	write(1, "\n", 1);
	return(0);
}
