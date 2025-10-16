
#include <unistd.h>
int     main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;
		while (av[1][i] && av[2][j])
		{
			if (av[1][i] == av[2][j])
				i++;
			j++;
		}
		if (!av[1][i])
			write(1, av[1], i);
	}
	write(1, "\n", 1);
	return (0);
}

/*PAST VERSIONS BELOW
/* #you are the world's greatest teacher: */
/*#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        const char *s1 = av[1];
        const char *s2 = av[2];
        int len = 0, i = 0;
        
        while (s1[len]) 
            len++;
        
        // checking all characters of s1 in s2
        while (i < len && *s2)
        {
            // next line checks if current s1 char is
            // equal to s2 char, after the comparison is
            // done, we increment the s2 pointer
            // even if the condition doesn't match
            // if the condition match, we increment i to
            // check for next s1 char
            if (s1[i] == *s2++)
                i++;
        }
        if (i == len)
            write(1, s1, len);
    }
    write(1, "\n", 1);
    return (0);
}*/

/*First attempt - fail
int	ft_strlen(const char *str)
{
	int	i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int				i;
		int				j;
		int	lookup[256] = {0};
		int			array_size;
		i = 0;
		j = 0;
		array_size = ft_strlen(av[1]);
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					lookup[i] = av[1][i];
					break ;
				}
				j++;
			}
			i++;
		}
		write(1, lookup, array_size);
	}
	write(1, "\n", 1);
	return (0);
}*/