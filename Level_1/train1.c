#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j;
    char *str = av[1];

    if(ac == 2)
    {
        while(str[i])
        {
            j = 0;
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                while(j <= str[i] - 'a')
                {
                    write(1, &str[i], 1);
                    j++;
                }
            }
            else if(str[i] >= 'A' && str[i] <= 'Z')
            {
                while(j <= str[i] - 'A')
                {
                    write(1, &str[i], 1);
                    j++;
                }
            }
            else
                write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}