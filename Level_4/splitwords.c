#include <stdlib.h>
#include <stdio.h> 

static char *splitwords_mem(const char *str, char d)
{
    int i = 0;
    char *word;

    while(str[i] && str[i] != d)
        i++;
    word = (char *)malloc(i + 1);
    if(!word)
        return(NULL);
    i = 0;
    while (str[i] && str[i] != d)
        {
            word[i] = str[i];
            i++;
        }
    word[i] = '\0';
    return(word);
}

/*test successful*/
/*int main(void)
{
    char *testword;
    testword = splitwords_mem("This is a test", ' ');
    printf("Testword is: %s\n", testword);
    free(testword);
    return(0);
}*/
