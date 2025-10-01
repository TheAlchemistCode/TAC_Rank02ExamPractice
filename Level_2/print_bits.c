
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

int main(unsigned char octet)
{
    octet = 16;
    print_bits(octet);
    return(0);
}

/*
#include <unistd.h> 

void print_bits(unsigned char octet)
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
