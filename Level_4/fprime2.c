#include <stdlib.h>
#include <stdio.h> 

int main(int ac, char **av)
{
    int num = atoi(av[1]);
    int d = 2;

    if (ac == 2)
    {
        if (num == 1)
            printf("1");
        
        while(d <= num)
        {
            if (num % d == 0)
            {
                printf("%d", d);
                num = num / d;
                if (num > 1)
                    printf("*");
            }
            else
                d++;
        }
    }
    printf("\n");
    return(0);
}