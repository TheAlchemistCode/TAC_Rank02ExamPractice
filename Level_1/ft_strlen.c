
#include <unistd.h> 

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