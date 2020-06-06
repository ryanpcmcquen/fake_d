#include "fake_d.h"
#include <stdio.h>

int main(void)
{
    FD_upper_bound = 500;

    int map[FD_get_total_length()];

    FD_zero(map);

    printf(
        "FD_upper_bound = %i\n",
        FD_upper_bound);

    printf(
        "Map 0, 0 = %i\n",
        FD_get(map, 0, 0));

    FD_set(map, 1, 1, 35);
    FD_set(map, 90, 10, 68);
    FD_set(map, 200, 350, 76);
    printf(
        "Map 1, 1 = %i\n",
        FD_get(map, 1, 1));
    printf(
        "Map 90, 10 = %i\n",
        FD_get(map, 90, 10));
    printf(
        "Map 200, 350 = %i\n",
        FD_get(map, 200, 350));

    FD_set(map, 0, 1, 1);
    FD_set(map, 500, 0, 500);
    printf(
        "Map 0, 1 = %i\n",
        FD_get(map, 0, 1));
    printf(
        "Map 500, 0 = %i\n",
        FD_get(map, 500, 0));

    FD_set(map, 500, 500, 42);
    printf(
        "Map 500, 500 = %i\n",
        FD_get(map, 500, 500));

    return 0;
}
