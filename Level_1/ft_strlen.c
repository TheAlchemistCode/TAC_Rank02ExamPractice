# include <stdio.h> 



int ft_strlen(char *str) 
{ 
    int i; 

    i = 0; 
    while (str[i] != '\0') 
        i++; 
    return (i); 
}

int main(void) 
{ 
    char str[] = "Hello World!"; 
    int length = ft_strlen(str); 
    printf("Length of the string: %d\n", length); 
    return 0; 
}