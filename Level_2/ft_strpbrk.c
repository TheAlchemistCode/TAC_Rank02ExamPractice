#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j;
    while (s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if (s1[i] == s2[j])
                return (char *)&s1[i];
            j++;
        }
        i++;
    }
    return NULL;
}

int main(void)
{
    char *s1 = "hello world";
    char *s2 = "ow";
    char *result = ft_strpbrk(s1, s2);

    if (result)
        printf("%s\n", result); // prints from first match to end
    else
        printf("No match\n");

    return 0;
}