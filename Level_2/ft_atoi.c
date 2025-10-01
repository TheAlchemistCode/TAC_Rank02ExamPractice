
int is_space(int c)
{
    return ((c >= 9 && c <= 13) || c == 32 ? 1 : 0);
}

int is_digit(int c)
{
    return (c >= '0' && c <= '9' ? 1 : 0);
}

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int nbr = 0;

    while(is_space(str[i]))
        i++;

    if (str[i] == '-')
    { 
        sign *= -1;
        i++;
    }

    while (is_digit(str[i]))
    {
        nbr *= 10;
        nbr += str[i] - 48;
        i++;
    }
    return (nbr *= sign);
}

#include <stdio.h>
int main(void)
{
    char *num = "42";
    printf("num equals %d\n", ft_atoi(num));
    return(0);
}
