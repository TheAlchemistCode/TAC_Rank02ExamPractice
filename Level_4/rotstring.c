#include <unistd.h> 

int aspace(char c)
{
    return (c == ' ' || c == '\t');
}

int skip_space(char *str, int i)
{
    while (str[i] && aspace(str[i]))
        i++;
    return (i);
}

void rotstring(char *str)
{
    int start;
    int end;
    int i; 

    i = 0; 
    // Skip leading whitespace
    i = skip_space(str, i);
    start = i; 

    // Find end of first word
    while (str[i] && !aspace(str[i]))
        i++;
    end = i;

    // Skip whitespace after first word
    i = skip_space(str, i);
    
    // Print all words EXCEPT the first (if they exist)
    if (str[i])
    {
        int spaceflag = 0;
        
        while (str[i])
        {
            if (aspace(str[i]))
            {
                spaceflag = 1;  // Remember we saw whitespace
                i = skip_space(str, i);  // Skip all consecutive whitespace
            }
            else if (spaceflag)  // ← This is perfect!
            {
                write(1, " ", 1);
                spaceflag = 0;
                write(1, &str[i], 1);
                i++;
            }
            else
                write(1, &str[i++], 1);
        }
        write(1, " ", 1);  // Space before first word
    }
    
    // Print the first word
    i = start; 
    while (i < end)
        write(1, &str[i++], 1);
}

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        rotstring(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}