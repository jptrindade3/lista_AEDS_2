#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VALMAX 1000

int main()
{
    int x, y, z;
    int i, j, k, l;
    char in[VALMAX][VALMAX], pokedex[VALMAX][VALMAX];

    printf("Ola mestre pokemon!!!\nQuantos pokemons voce ja capturou?\n");
    scanf("%d", &x);
    if(x > 0)
    {
        l=0;
        printf("Insira os nomes dos pokemons capturados: \n");
    }

    //Recebendo os nomes
    for(i=0; i<=x; i++)
    {
        gets(in[i]);
        for(j=0; j<=i; j++)
        {
            y = strcmp(in[i], pokedex[j]);
            if(y == 0)
            {
                break;
            }
            else if(y != 0 && i == j)
            {
                strcpy(pokedex[j], in[i]);
                l++;
            }
        }
    }



    z = 151-l;
    printf("\nFaltam %d pokemons pra completar a pokedex\n", z);

    return 0;
}
