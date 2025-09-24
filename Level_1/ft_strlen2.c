#include <unistd.h> 

int putnbr(int nbr)
{
    if (nbr > 9)
        putnbr(nbr / 10);
    write (1, &"0123456789"[nbr % 10], 1);
    return (0);
}

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

#include <stdio.h>
int main (void)
{
    char *string = "hello";
    printf("The string has %d letters\n", ft_strlen(string));
    return(0);
}