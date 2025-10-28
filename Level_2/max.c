int max(int* array, unsigned int len)
{
    if (len == 0)
        return (0);
    
    int maxnum = array[0];    // Start with first element, not 0
    unsigned int i = 1;     // Start from second element
    
    while (i < len)
    {
        if (array[i] > maxnum)
            maxnum = array[i];
        i++;
    }
    return (maxnum);
}

#include <stdio.h>
int main(void)
{
    int array[] = {3,4,56,7,2};
    printf("%d", max(array, 5));
}
