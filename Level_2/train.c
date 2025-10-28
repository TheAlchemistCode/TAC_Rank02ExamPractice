#include <unistd.h>

void printbits (unsigned char octet)
{
    int i = 8;
    unsigned char bit = 0;

    while(i--)
    {
        bit = ((octet >> i) & 1) + 48;
        write(1, &bit, 1);
    }
}

int	main(void)
{
	unsigned char octet = 1;
	printbits(octet);
	write(1, "\n", 1);
	return (0);
}