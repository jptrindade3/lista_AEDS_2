#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VALMAX 100


int main()
{
    char in[VALMAX][VALMAX], out[VALMAX][VALMAX];
    int w, x, y, z, i, j, k, l, m, n;

    printf("Digite quantas mensagens deseja criptografar: ");
    scanf("%d", &w);

    printf("Digite as mensagens para criptografa-las: \n");

    for(m=0; m<=w; m++)
    {
        gets(in[m]);
        x = strlen(in[m]);

        //Deslocando letras em 3 posições
        for(i=0; i<x; i++)
        {
            if(in[m][i] >= 65 && in[m][i] <= 90 || in[m][i]>=97 && in[m][i]<=122)
            {
                in[m][i] = in[m][i] + 3;
            }
        }

        //Inversão de linhas
        y = x-1;

        for(j=0; j<=y; j++)
        {
            out[m][j] = in[m][y-j];
        }

        for(k=0; k<=y; k++)
        {
            in[m][k] = out[m][k];
        }

        //Deslocando metade truncada
        z = (x/2);

        for(l=z; l<x; l++)
        {
            in[m][l] = in[m][l]-1;
        }

    }

    //Impressão
    for(n=0; n<=w; n++)
    {
        puts(in[n]);
    }

    return 0;
}
