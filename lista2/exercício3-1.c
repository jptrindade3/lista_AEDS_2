#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 100
#define M 1000

void calcMean(float in[N][M], int v, int w)
{
    int i, j;
    float soma=0, media;

    for(i=0; i<v; i++)
    {
        soma = soma + in[w][i];
        if(i == (v-1))
        {
            media = (soma/v);
            printf("%.3f\t", media);
        }
    }
}

void calcStd(float in[N][M], int v, int w)
{
    int i, j, k;
    float somadp=0, dp, soma=0, media;

    for(i=0; i<v; i++)
    {
        soma = soma + in[w][i];
        if(i == (v-1))
        {
            media = (soma/v);
            for(k=0; k<v; k++)
            {
                somadp = somadp + pow((in[w][k]-media), 2);
                if( k == (v-1))
                {
                    dp = sqrt((somadp/v));
                    printf("%.3f\n", dp);
                }
            }
        }
    }
}

int main()
{
    float matrix[N][M];
    int x, y, i, j, k;

    printf("Digite o numero de linhas: ");
    scanf("%d", &x);
    printf("\nDigite o numero de colunas: ");
    scanf("%d", &y);
    printf("\ninsira os numeros desejados: \n");

    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }

    printf("\n");

    for(k=0; k<x; k++)
    {
        calcMean(matrix, y, k);
        calcStd(matrix, y, k);
    }

    printf("\nEle esta arredondando os valores, por isso pode dar 1 a +\n");

    return 0;
}
