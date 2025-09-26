#include <unistd.h>
int main(int ac, char **av)
{
    if (ac == 3)
    {
        int j = 0;
        while (av[2][j])
        {
            int i = 0;
            while (av[1][i])
            {
                if (av[1][i] == av[2][j])
                    write(1, &av[2][j], 1);
                i++;
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}