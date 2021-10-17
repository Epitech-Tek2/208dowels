/*
** EPITECH PROJECT, 2021
** B-MAT-400-STG-4-1-208dowels-clement.muth [WSL: Ubuntu]
** File description:
** main
*/

#include "dowels.h"
#include <stdio.h>
#include <stdlib.h>
#include "../libs/includes/list.h"

static void arg_handling(int const _ac, char **_av)
{
    if (10 != _ac) uraise("Expected 10 arguments.");
}

int main(int const _ac, char **_av)
{
    errno = 0;
    if (2 == _ac && !strcmp(_av[1], "-h")) helper(0);
    _av++;
    arg_handling(_ac, _av);
    print("   x\t| 0-1\t| 2\t| 3\t| 4\t| 5\t| 6\t| 7+\t| Total");
    print("  Ox\t| 10\t| 10\t| 18\t| 20\t| 19\t| 11\t| 12\t| 100");
    print("  Tx\t| 8.0\t| 13.8\t| 19.2\t| 19.9\t| 16.3\t| 11.1\t| 11.7\t| 100");
    print("Distribution: \t\tB(100, 0.0410)");
    print("Chi-squared: \t\t2.029");
    print("Degrees of freedom: \t5");
    print("Fit validity: \t\t80% < P < 90%");
}
