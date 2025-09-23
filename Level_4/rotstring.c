#include <unistd.h>

void	rotstring(char *str)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	// Skip leading spaces and tabs
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	
	// Remember where first word starts
	start = i;
	
	// Find end of first word
	while (str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	
	// Remember where first word ends
	end = i;
	
	// Skip spaces after first word
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	
	// Print everything AFTER the first word
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	
	// If there was something after first word, add space
	if (str[end])
		write(1, " ", 1);
	
	// Print the first word at the end
	i = start;
	while (i < end)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rotstring(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}