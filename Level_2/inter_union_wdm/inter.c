#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int array[256] = {};
    char *str1 = av[1];
    char *str2 = av[2];

    if (ac == 3)
    {
        while(str1[i])
        {
            j = 0;
            while (str2[j])
            {
                if(str1[i] == str2[j] && !array[(int)str2[j]])
                {
                    array[(int)str2[i]] = 1;
                    write(1, &str2[j], 1);
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
