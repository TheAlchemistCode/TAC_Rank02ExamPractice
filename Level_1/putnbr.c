
#include <unistd.h>
void putnbr(int nbr)
{
    if (nbr > 9)
        putnbr(nbr / 10);
    write (1, &"0123456789"[nbr % 10], 1);
}
