#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H

typedef struct  s_point
{
    int         x;
    int         y;
}               t_point;

void    fill(char **tab, t_point size, char target, int row, int col);
void    flood_fill(char **tab, t_point size, t_point begin);

#endif
