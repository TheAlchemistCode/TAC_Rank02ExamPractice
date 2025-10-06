#include <unistd.h> 

void rotstring(char *str)
{
    int start;
    int end;
    int i; 

    i = 0; 
    while (str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    start = i; 

    while (str[i] && str[i] != ' ' && str[i] != '\t')
        i++;
    end = i;

    while (str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    
    if (str[i])
    {
        while (str[i])
        {
            if (str[i] == ' ' || str[i] == '\t')
            {
                while (str[i] && (str[i] == ' ' || str[i] == '\t'))
                    i++;
                if (str[i])
                    write (1, " ", 1); // write space only if more chars follow
            }
            else
            {
                write(1, &str[i], 1);
                i++;
            }
        }
        write (1, " ", 1);
    }
    
    i = start; 
    while (i < end)
    {
        write (1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        rotstring(av[1]);
    }
    write (1, "\n", 1);
    return (0);
}