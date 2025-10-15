unsigned char reverse_bits(unsigned char octet)
{
    unsigned int i = 8;
    unsigned char res = 0;

    while(i--)
    {
        res = (res << 1) | (octet & 1);
        octet = octet >> 1;
    }
    return(res);
}

#include <stdio.h>
int main(void)
{
    unsigned char octet = 8;
    printf("Before: %d\n", octet);
    unsigned char result = reverse_bits(octet);
    printf("After: %d\n", result);
    return(0);
}
