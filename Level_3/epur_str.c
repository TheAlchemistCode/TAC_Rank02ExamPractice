#include <unistd.h>

void putchar(char c)
{
    write(1, &c, 1);
}

int is_space(char c)
{
    if(c <= ' ')
        return (1);
    return (0);
}

int main (int ac, char **av)
{
    int i = 0;
    char *str = av[1];
    int flag = 0;

    if(ac == 2)
    {
        while(is_space(str[i]))
            i++;
        
        while(str[i])
        {
            if (is_space(str[i]))
                flag = 1;
            if(!is_space(str[i]))
            {
                if(flag)
                    putchar(' ');
                flag = 0;
                putchar(str[i]);
            }
            i++;
        }
    }
    putchar('\n');
}
