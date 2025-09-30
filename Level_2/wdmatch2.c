#include <unistd.h>


/*TRY REPLACE *j++ my initialising it to zero*/
int ft_strlen(const char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        const char *s1 = av[1];
        const char *j = av[2];  // j is now a pointer to s2
        int len = ft_strlen(s1);  // Using ft_strlen function
        int i = 0;
        
        // checking all characters of s1 in s2
        while (i < len && *j)
        {
            // next line checks if current s1 char is
            // equal to current j char, after the comparison is
            // done, we increment the j pointer
            // even if the condition doesn't match
            // if the condition match, we increment i to
            // check for next s1 char
            if (s1[i] == *j++)
                i++;
        }
        if (i == len)
            write(1, s1, len);
    }
    write(1, "\n", 1);
    return (0);
}