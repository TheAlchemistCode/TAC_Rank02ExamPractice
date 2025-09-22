
int ft_atoi(const char *nptr)
{
    int num;
    int sign;

    num = 0;
    sign = 1;
    while (*nptr == ' ' || *nptr == '\t')
        nptr++;
    if (*nptr == '-' || *nptr == '+')
    {
        if(*nptr == '-')
            sign *= -1;
        nptr++;
    }
    while (*nptr >= '0' && *nptr <= '9')
    {
        num = (num * 10) + (*nptr - '0');
        nptr++;
    } 
    return(sign * num);
}

/*#include <stdio.h>
int main(void)
{
    char *ascnum = "123";
    printf("ascnum = %s and ftatoi = %d\n", ascnum, ft_atoi(ascnum));
    return(0);
}*/
