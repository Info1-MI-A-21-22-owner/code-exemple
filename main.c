#include "main.h"

#include <stdio.h>
/*
  Commentaire
  Ici un commentaire sur plusieurs lignes
*/

// argc : nombre d'arguments
// argv : tableau

/*
0 : nom du prog
1 : arg 1
2 : arg 2

./app 12 56 foo

0 : ./app
1 : 12
2 : 56
3 : foo
*/

int main(int argc, char* argv[])
{
    printf("\n\033[1;34mTest des arguments\n\033[0;30m");

    int value = 0;
    // string to int
    int r = sscanf("12.34", "%d", &value);
    // scanf et sscanf retourne le nombre de valeurs récupérées par la fonction
    printf("Value : %d  --  retour : %d\n", value, r);

    printf("Arg 0 string : %s\n", argv[0]);
    if (argc >= 2)
    {
        printf("Arg 1 string : %s\n", argv[1]);

        int val;
        if( sscanf(argv[1], "%d", &val) == 1 )
          printf("Argv 1 : %d", val);
        else
          printf("Erreur conversion impossible\n");
    }

    // ex01_calcul();
    // ex02_printf();
    return 0;
}