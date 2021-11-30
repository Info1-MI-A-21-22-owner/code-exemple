#include "main.h"

#include <stdbool.h>
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

// définir une fonction
void AfficherMessage(int val, double val_d)
{
    printf("Afficher valeur %d\n", val);
    printf("Afficher valeur %.2lf\n", val_d);
}

char GetChar()
{
    char c = 'a';
    int tutu = 12;
    return c + tutu;
}

int main(int argc, char* argv[])
{
    td_boucle(argc, argv);
    return;

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
        if (sscanf(argv[1], "%d", &val) == 1)
            printf("Argv 1 : %d", val);
        else
            printf("Erreur conversion impossible\n");
    }

    // Type
    int val_test_1 = 12;
    bool res = val_test_1 > 0;  // int / bool
    bool var_b = true;          // false

    if (!res)
    {
        printf("Val > 12\n");
    }

    //AfficherMessage(45, 34.);
    //AfficherMessage(23, 7.);

    // ex01_calcul();
    // ex02_printf();
    //ex_fonction();
    
    return 0;
}