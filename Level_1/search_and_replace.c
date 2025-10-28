#include <unistd.h>

int is_single_char(char *str)
{
    return (str[0] != '\0' && str[1] == '\0');
}

int main (int ac, char *av[])
{
    if (ac == 4)
    {
        if (is_single_char(av[2]) && is_single_char(av[3]))
        {
            int i = 0;
            while (av[1][i])
            {
                if (av[1][i] == av[2][0])
                    av[1][i] = av[3][0];
                write (1, &av[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return(0);
}
