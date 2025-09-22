
int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = (num * 10) + (*nptr - '0');
		nptr++;
	}
	return (sign * num);
}

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char *ascnum = "123"; // String literal
    printf("ft_atoi(\"%s\") = %d\n", ascnum, ft_atoi(ascnum));
    return 0;
}
