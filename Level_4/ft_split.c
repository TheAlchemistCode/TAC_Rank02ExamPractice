#include <stdlib.h>

static int countwords(const char *str, char d)
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

char **ft_split(const char *str, char d)
{
    int i = 0;
    int j = 0;
    char **words;

    if(!str)
        return(NULL);
    words = (char **)malloc((countwords(str, d) + 1) * sizeof(char*));
    if(!words)
        return(NULL);
    while(str[i])
    {
        if(str[i] != d)
        {
            words[j++] = splitwords_mem(&str[i], d);
            while(str[i] && str[i] != d)
                i++;
        }
        else
            i++;
    }
    words[j] = NULL;
    return(words);
}

#include <stdio.h>

int main(void)
{
    char **testarray;
    int i = 0;

    testarray = ft_split("This is a test", ' ');
    while(testarray[i])
    {
        printf("word %d: %s\n", i, testarray[i]);
        free(testarray[i]);
        i++;
    }
    free(testarray);
    return(0);
}

