
static int countwords(char *str, char d)
{
    int i = 0;
    int words = 0;

    while(str[i])
    {
        if(str[i] != d)
        { 
            words++;
            while(str[i] && str[i] != d)
                i++;
        }
        else
            i++;
    }
    return(words);
}

#include <stdio.h>

/*Test successful*/
/*int main(void)
{
    printf("%d\n", countwords("This is a test", ' '));
    return(0);
}*/
