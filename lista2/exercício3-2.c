#include <stdio.h>
#include <stdlib.h>
#define VALMAX 100

int main()
{
    int x, y, i, j, k, l, matrix[VALMAX][VALMAX], soma=0;
    char Z;

    printf("Qual a dimensao da matriz?: ");
    scanf("%d", &x);

    for(i=0; i<x; i++)
    {
        for(j=0; j<x; j++)
        {
            matrix[i][j] = rand() % 101 ;
        }
    }

    fflush(stdin);

    printf("\nColunas ou Linhas?: ");
    scanf("%c", &Z);

    if(Z == 'L')
    {
        printf("\nQual o indice da linha?: ");
        scanf("%d", &y);
        for(i=0; i<x; i++)
        {
            soma = soma + matrix[(y)][i];
        }
    }
    else if(Z == 'C')
    {
        printf("\nQual o indice da coluna?: ");
        scanf("%d", &y);
        for(i=0; i<x; i++)
        {
            soma = soma + matrix[i][(y)];
        }

    }

    for(i=0; i<x; i++)
    {
        printf("\n");
        for(j=0; j<x; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
    }
    printf("\n%d", soma);


    return 0;
}
