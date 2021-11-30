#include <stdio.h>
#include <stdlib.h>

void afficher(int val1, int val2, int inc)
{
    int start = val1 > val2 ? val2 : val1;
    int stop = val1 > val2 ? val1 : val2;
}

int argv_to_int(char* argv)
{
    int value;
    if (sscanf(argv, "%d", &value) != 1)
    {
        exit(1);
    }

    return value;
}

int td_boucle(int argc, char* argv[])
{
    printf("\n\033[1;34mTD Boucle\n\033[0;36m");

    if (argc == 1) return 1;

    // ./app a 4 5
    //   0   1 2 3

    char opt = argv[1][0];
    switch (opt)
    {
        case 'a':
            if (argc < 4)
            {
                return 1;
            }
            afficher(argv_to_int(argv[2]), argv_to_int(argv[3]), 1);
            break;

        case 'b':
            break;

        case 'c':
            break;

        default:
            break;
    }

    return 0;
}