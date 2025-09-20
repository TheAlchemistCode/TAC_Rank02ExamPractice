#include "test_functions.h"

char **make_area(char *zone[])
{
    char **area;
    int i, j, k;
    int rows = 0;
    
    // Count rows
    while (zone[rows])
        rows++;
    
    // Allocate memory for array of strings
    area = (char **)malloc(sizeof(char *) * rows);
    
    // Process each row
    for (i = 0; i < rows; i++)
    {
        int len = 0;
        // Count characters (excluding spaces)
        for (j = 0; zone[i][j]; j++)
            if (zone[i][j] != ' ')
                len++;
        
        // Allocate memory for each row
        area[i] = (char *)malloc(sizeof(char) * (len + 1));
        
        // Copy characters (excluding spaces)
        k = 0;
        for (j = 0; zone[i][j]; j++)
        {
            if (zone[i][j] != ' ')
                area[i][k++] = zone[i][j];
        }
        area[i][k] = '\0';
    }
    
    return (area);
}

void print_tab(char **tab)
{
    int i, j;
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            write(1, &tab[i][j], 1);
            if (j < 7)
                write(1, " ", 1);
        }
        write(1, "\n", 1);
    }
}
