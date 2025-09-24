int is_power_of_2(unsigned int n)
{
    return (n > 0) && ((n & (n - 1)) == 0);
}

#include <stdio.h>
int main(void)
{
    int num = 128;
    if (is_power_of_2(num))
        printf("num is a power of two");
    else
        printf("num is NOT a power of 2");
    return(0);
}
