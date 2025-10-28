
void sort_int_tab(int *array, unsigned int array_size)
{
    int i = 0;
    int j = 0;
    int temp;

    while(i < array_size - 1)
    {
        j = i + 1;

        while (j < array_size)
        {

            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            j++;
        }
        i++;
    }
}

#include <stdio.h>
int main(void)
{
    int array[] = {4,3,2,1};
    unsigned int array_size = 4;

    sort_int_tab(array, array_size);

    for(unsigned int i = 0; i < array_size; i++)
        printf("%d", array[i]);
}
