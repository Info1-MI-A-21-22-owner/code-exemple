#include <stdio.h>

void afficher_val(int val)
{
    printf("Valeur : %d\n", val);
}

void test_ref(int* val)
{
    // printf("Val : %x\n", val);
    *val += 5;
    afficher_val(*val);
}

int ex_fonction()
{
    int v1 = 2;

    afficher_val(v1);
    test_ref(&v1);
    afficher_val(v1);

    return 0;
}
