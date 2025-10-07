void sort_int_tab(int *array, unsigned int array_size)
{
    int tmp;
    unsigned int i;
    unsigned int j;

    i = 0;
    while (i < array_size - 1)
    {
        j = i;
        while (j < array_size)
        {
            if (array[i] > array[j])
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

#include <stdio.h>

int main(void)
{
    int test_array[] = {5,4,3,2,1};
    unsigned int array_size = 5;

    sort_int_tab(test_array, array_size);

    printf("After sorting: ");
    for(unsigned int i = 0; i < array_size; i++)
        printf("%d ", test_array[i]);

    return(0);
}