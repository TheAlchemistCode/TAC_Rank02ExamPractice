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
    int test_array[] = {5, 2, 8, 2, 1, 5};
    unsigned int size_array = 6;

    sort_int_tab(test_array, size_array);
}