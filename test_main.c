#include "test_functions.h"
#include "flood_fill.h"

int main(void)
{
    char **area;
    t_point size = {8, 5};
    t_point begin = {2, 2};
    char *zone[] = {
        "1 1 1 1 1 1 1 1",
        "1 0 0 0 1 0 0 1",
        "1 0 0 1 0 0 0 1",
        "1 0 1 0 0 0 0 1",
        "1 1 0 0 0 0 0 0",
        NULL
    };
    
    area = make_area(zone);
    print_tab(area);
    flood_fill(area, size, begin);
    write(1, "\n", 1);
    print_tab(area);
    return (0);
}
