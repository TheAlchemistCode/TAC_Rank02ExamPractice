/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clyon <clyon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:23:21 by clyon             #+#    #+#             */
/*   Updated: 2025/08/22 16:17:57 by clyon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	putchar(char c)
{
	write(1, &c, 1);
}

int	isLower(int c)
{
	return (c >= 'a' && c<= 'z');
}

int toUpper(int c)
{
	if (isLower(c))
		return (c - 32);
	return (c);
}

/*int	main(int ac, char **av)
{
	if (ac < 2)
	{
		putchar('\n');
		return(0);
	}
	int	i;
	
	i = 0;
	while (av[1][i])
	{
		if (av[1][i] == '_' || av[1][i] == ' ')
		{
			i++;
			putchar(toUpper(av[1][i]));
		}
		else
			putchar(av[1][i]);
		i++;
	}
	putchar('\n');
	return (0); 
}*/

int	main(int ac, char **av)
{
	int	loop_cnt;
	int	i;

	if (ac < 2)
		return (write(1, "\n", 1), 0);
	loop_cnt = 1;
	while (loop_cnt < ac)              // loop over arguments
	{
		i = 0;
		while (av[loop_cnt][i])        // loop over chars of av[loop_cnt]
		{
			if (av[loop_cnt][i] == '_' || av[loop_cnt][i] == ' ')
			{
				i++;
				if (av[loop_cnt][i])   // minimal guard
					write(1, &((char){toUpper(av[loop_cnt][i])}), 1);
			}
			else
				write(1, &av[loop_cnt][i], 1);
			i++;
		}
		loop_cnt++;
	}
	write(1, "\n", 1);
	return (0);
}

/*Here I cleverly implement a better main, that can take more
* more args because I implement an outer loo
TO BE EDITED
*/

/*TEST MAIN for putchar
int	main(void)
{
	char c = 'A';

	putchar(c);
}*/

/***********************************************************/

/*TEST MAIN for writing out a string using putchar
void putstr(const char *s)
{
    int i = 0;
    while (s[i] != '\0')   // loop until end of string
    {
        putchar(s[i]);     // print one character
        i++;
    }
}

int main(void)
{
    putstr("hello world");
    putchar('\n');
    return 0;
}
*/