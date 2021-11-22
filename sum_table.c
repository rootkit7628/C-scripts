#include <stdio.h>

void creer_tab(int *n, int table[])
{
    int i;
    printf("\nNB: Les 2 Tableaux doivent  avoir la mm taille!\nCombien d'élément contient le tableau : ");
    scanf("%d", n);
    for (i = 0; i < *n; i++)
    {
        printf("La %dième nombre >> ", i + 1);
        scanf("%d", &table[i]);
    }
    printf("\n");
}

void show_tab(int n, int table[])
    {
        int i;
        printf("[ ");
        for(i=0;i<n;i++)
            {
                if (i == n - 1)
                {
                    printf("%d ]\n", table[i]);
                    break;
                }
                printf("%d,",table[i]);
            }
    }
void exchange(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void sorted_croissant(int n, int table[])
{
    int i, check_nbr;
    do
    {
        check_nbr = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (table[i + 1] < table[i])
            {
                exchange(&table[i + 1], &table[i]);
                check_nbr++;
            }
        }
    } while (check_nbr != 0);
}
void sorted_decroissant(int n, int table[])
{
    int i, check_nbr;
    do
    {
        check_nbr = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (table[i + 1] > table[i])
            {
                exchange(&table[i + 1], &table[i]);
                check_nbr++;
            }
        }
    } while (check_nbr != 0);
}

void somme_tab(int n,int table1[],int table2[],int table3[])
    {
        int i;
        for(i=0;i<n;i++)
            {
                    table3[i] = table1[i] + table2[i];
            }
    }
int main(int argc, char **argv)
{
    int Tab1[100];
    int Tab2[100];
    int Tab3[100];
    int nb;

    //Créer et Afficher le tableau 1
    creer_tab(&nb, Tab1);
    printf("Tableau 1 : ");
    show_tab(nb, Tab1);

    //Créer et Afficher le tableau 2
    creer_tab(&nb, Tab2);
    printf("Tableau 2 : ");
    show_tab(nb, Tab2);

    //Créer et Afficher le tableau 3 somme des deux autres
    somme_tab(nb,Tab1,Tab2,Tab3);
    printf("\nTableau1 + Tableau2 : ");
    show_tab(nb, Tab3);

    return 0;
}
