
unsigned char swap_bits(unsigned char octet)
{
    return((octet >> 4) | (octet << 4));
}

#include <stdio.h>
int main(void)
{
    unsigned char octet = 'F';
    printf("%c", swap_bits(octet));
}
