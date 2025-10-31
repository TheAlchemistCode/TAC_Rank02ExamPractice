#include <unistd.h>

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
            
            else if(flag)
            {
                write(1, " ", 1);
                flag = 0;
                write(1, &str[i], 1);
            }
            else if(!aspace(str[i]))
                write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
