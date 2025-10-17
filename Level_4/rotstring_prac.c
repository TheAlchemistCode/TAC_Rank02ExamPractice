#include <unistd.h>

int aspace(char c)
{
    return(c == ' ' || c == '\t');
}

int skipspace(char *str, int i)
{
    while(str[i] && aspace(str[i]))
        i++;
    return(i);
}

void rotstring(char *str)
{
    int i = 0;
    int end;
    int start;

    i = skipspace(str, i);
    start = i;

    while(str[i] && !aspace(str[i]))
        i++;
    end = i;

    i = skipspace(str, i);

    if(str[i])
    {
        int spaceflag = 0;
        while(str[i])
        {
            if(aspace(str[i]))
            {
                spaceflag = 1;
                i = skipspace(str, i);
            }
            else if(spaceflag)
            {
                write(1, " ", 1);
                spaceflag = 0;
                write(1, &str[i], 1);
                i++;
            }
            else
                write(1, &str[i++], 1);
        }
        write(1, " ", 1);
    }
    i = start;
    while(i < end)
        write(1, &str[i++], 1);
}

int main(int ac, char **av)
{
    if(ac >= 2)
    {
        rotstring(av[1]);
    }
    write(1, "\n", 1);
    return(0);
}