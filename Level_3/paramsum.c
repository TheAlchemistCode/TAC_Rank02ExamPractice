
#include <unistd.h>

int putnbr(int nbr)
{
    if (nbr > 9)
        putnbr(nbr / 10);
    write (1, &"0123456789"[nbr % 10], 1);
    return (0);
}

int main(int ac, char **av)
{
    (void) av;
    putnbr(ac - 1);
    write(1, "\n", 1);
    return(0);
}
