#include <unistd.h>

void putchar(char c)
{
    write(1, &c, 1);
}

int aspace(char c)
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
        while(aspace(str[i]))
            i++;
        
        while(str[i])
        {
            if (aspace(str[i]))
                flag = 1;
            if(!aspace(str[i]))
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
