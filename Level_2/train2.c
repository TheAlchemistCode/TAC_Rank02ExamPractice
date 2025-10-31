int aspace(int c)
{
    return((c >= 9 && c <= 13) || c == 32);
}

int adigit(int c)
{
    return(c >= '0' && c <= '9');
}

int ft_atoi(char *str)
{
    int sign = 1;
    int num = 0;
    int i = 0;

    while(aspace(str[i]))
        i++;

    if(str[i] == '-')
    {
        sign *= -1;
        i++;
    }

    while(adigit(str[i]))
    {
        num *= 10;
        num += str[i] - '0';
        i++;
    }
    return(num *= sign)
