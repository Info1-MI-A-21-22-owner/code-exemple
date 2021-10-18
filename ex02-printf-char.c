#include <stdio.h>

void ex02_printf(){
    printf("\n\033[1;34mExemple de printf\n\033[0;30m");

    printf("Test");
    printf("Printf\n");

    // 2 5 10
    int val = 123;
    printf("Print 1 : %5d [m]\n", val);

    int val1 = 1, val2 = 1000;
    int larg = 4;
    +printf("Print 1 : %*d [m]\n", larg, val1);
    printf("Print 2 : %*d [m]\n", larg, val2);

    // affichage identique
    //printf("Print %*d / %*d\n", 4, val1, 5, val2);
    printf("Print %*d / ", 4, val1);
    printf("%*d\n", 5, val2);

    double valF = 1000.234;
    printf("Val double %9.2lf\n", valF);


    int val_i = 'a';
    char val_c = 'a';
    char val_c1 = 97;

    printf("Char : %c  -  %d\n", val_c, val_c);

    printf("Char + 2 : %c\n", val_c + 2);

    // 97 => a
    if( val_c >= 'a' && val_c <= 'z' ){
        printf("Le caractère est minuscule\n");
    }

    // pour afficher les caractères spéciaux utiliser le
    printf("Bonjour backslash : \\  tab : \t apostrophe :\' \n");
}