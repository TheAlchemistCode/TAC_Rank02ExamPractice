#include <unistd.h> 

void rotstring(char *str)
{
    int start;
    int end;
    int i; 

    i = 0; 
    // Skip leading whitespace
    while (str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    start = i; 

    // Find end of first word
    while (str[i] && str[i] != ' ' && str[i] != '\t')
        i++;
    end = i;

    // Skip whitespace after first word
    while (str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    
    // Print all words EXCEPT the first (if they exist)
    if (str[i])
    {
        int space_flag = 0;
        
        while (str[i])
        {
            if (str[i] == ' ' || str[i] == '\t')
            {
                space_flag = 1;  // Remember we saw whitespace
                while (str[i] && (str[i] == ' ' || str[i] == '\t'))
                    i++;  // Skip all consecutive whitespace
            }
            else
            {
                if (space_flag)
                {
                    write(1, " ", 1);  // Print single space
                    space_flag = 0;    // Reset flag
                }
                write(1, &str[i], 1);  // Print character
                i++;
            }
        }
        write(1, " ", 1);  // Space before first word
    }
    
    // Print the first word
    i = start; 
    while (i < end)
    {
        write(1, &str[i], 1);
        i++;
    }
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