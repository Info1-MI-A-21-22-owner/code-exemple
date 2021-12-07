# Résumé du cours

## 6.12.21 - Les tableaux
- Un tableau se déclare : \<type\> \<nom\> [size]
- **On en peut pas utiliser une variable pour la taille**
- {0}, permet d'initialiser un tableau à 0
- Un tableau non initialisé à des valeurs aléatoires
- sizeof : retourne la taille du paramètre en byte

    ```C
        int var;
        int tab[12];
    ```

  - `sizeof(int)` : nbr de bytes pour stocker un `int`
  - `sizeof(tab)` : nbr de bytes pour stocker tout le tableau
  - `sizeof(var)` : nbr bytes pour stocker la variable `var`
   
- Le type `size_t` permet de déclarer une variable de la taille de la mémoire. C'est un entier.

Comment utiliser un tableau
```C
int tab[10];
const size_t size = sizeof(tab) / sizeof(tab[0]);

ou

#define SIZE 10
int tab[SIZE];
```

## 07.12.21 - Les tableaux
### Fonction
- Un tableau est passé par référence dans une fonction du tableau

### Define
- un `#define` est un remplacement de texte
- la syntaxe du `define` est : `#define SIZE 12`
- il faut faire attention de ne pas mettre de `;` après le `define`