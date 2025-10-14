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

#include <stdio.h>
int main(void)
{
    unsigned char num = 8;
    printf("Before ");
    printf("%d\n", num);

    unsigned char result = reverse_bits(num);
    printf("After ");
    printf("%d", result);
    return 0;  // Also good practice to add this
}