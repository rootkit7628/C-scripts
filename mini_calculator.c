
#include <stdio.h> /*directive de préprocésseur*/
#include <stdlib.h>
#include <math.h>

void somme(int a,int b);
void soustraction(int a, int b);
void division(float a, float b);
void multiplication(int a, int b);
void modulo(int a, int b);

int main(int argc,char *argv[])
{
    int operation,a=1;
    printf("=========================================================\n==                    WELCOME TO GOKEI                 ==\n====================MY SUPER CALCULATOR====================");
    while (a)
    {
        printf("\nChoisissez votre opérations (1- 5) :\n(1) Somme\n(2) Soustraction\n(3) Multiplication\n(4) Division\n(5) Modulo\n\n(0)Quiter\nVOTRE OPERATION : ");
        scanf("%d",&operation);

        switch(operation)
        {
            case 0:
                return 0;
                break;
            case 1:
                printf(":::::::::::SOMME :::::::::::::::(NB; Ajouter 0 pour arreter le calcul)\n");
                somme(0,0);
                break;
            case 2:
                printf(":::::::::::SOUSTRACTION :::::::::::::::(NB; Ajouter 0 pour arreter le calcul)\n");
                soustraction(0,0);
                break;
            case 3:
                printf("::::::::::: MULTIPLICATION :::::::::::::::(NB; Ajouter 0 pour arreter le calcul)\n");
                multiplication(1,0);
                break;
            case 4:
                printf(":::::::::::DIVISION :::::::::::::::(NB; Ajouter 0 pour arreter le calcul)\n");
                division(0,0);
                break;
            case 5:
                printf(":::::::::::MODULO :::::::::::::::\n");
                modulo(0, 0);
                break;
        }

    }
    return 0;
}

void somme(int a, int b)
{
    printf("Nombre :");
    scanf("%d",&a);

    while (1)
    {
        printf(" %d + ", a);
        scanf("%d", &b);

        if (b==0)
        {
            printf("\nTotal = %d\n", a);
            break;
        }
        a = a + b;
    }
}

void soustraction(int a, int b)
{
    printf("Nombre :");
    scanf("%d",&a);
    while (1)
    {
        printf(" %d - ", a);
        scanf("%d", &b);

        if (b == 0)
        {
            printf("Total = %d\n", a);
            break;
        }
        a = a - b;
    }
}

void multiplication(int a, int b)
{
    printf("Nombre :");
    scanf("%d",&a);

    while (1)
    {
        printf(" %d x ", a);
        scanf("%d", &b);

        if (b == 0)
        {
            printf("Total = %d\n", a);
            break;
        }
        a = a * b;
    }
}

void division(float a, float b)
{
    printf("Nombre :");
    scanf("%f",&a);
    while (1)
    {
        printf(" %f / ", a);
        scanf("%f", &b);
        if (b == 0)
        {
            printf("Total = %f\n", a);
            break;
        }
        a=a/b;
    }
}
void modulo(int a, int b)
{
        printf(" a modulo b");
        printf("\nNombre1 :");
        scanf("%d", &a);
        printf("Nombre2 :");
        scanf("%d", &b);

        printf("\n%d modulo %d égale %d\n", a, b, a%b);
}

