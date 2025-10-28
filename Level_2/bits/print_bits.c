
#include <unistd.h>
void print_bits(unsigned char octet)
{
    unsigned char bit = 0;
    int i = 8;

    while(i--)
    {
        bit = ((octet >> i) & 1) + 48;
        write(1, &bit, 1);
    }
}

int	main(void)
{
	unsigned char octet = 1;
	print_bits(octet);
	write(1, "\n", 1);
	return (0);
}

































void print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;

    while(i--)
    {
        bit = (octet >> i & 1) + 48;
        write(1, &bit, 1);
    }
}



























void    print_bits(unsigned char octet)
{
    unsigned char bit;
    unsigned int i = 8;

    while(i--)
    {
        bit = (octet >> i & 1) + 48;
        write(1, &bit, 1);
    }

}






























#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;

    while (i--)
    {
        bit = (octet >> i & 1) + 48;
        write (1, &bit, 1);
    }

}

int main(void)
{
    unsigned char octet = 16;
    print_bits(octet);
    return(0);
}

/*
#include <unistd.h> 

void print_bits(unsigned char octet)nsigned char octet
{
    int i = 8;
    unsigned char bit = 0;

    while (i--)
    {
        bit = (octet >> i & 1) + 48;
        write(1, &bit, 1);
    }
}

int main(void)
{
    unsigned char octet = 7;
    print_bits(octet);
    return(0);
}*/
