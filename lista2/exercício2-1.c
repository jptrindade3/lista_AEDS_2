#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 50


int main()
{
    int tam1, tam2, tamlim, cmp, i=0;
    char nome1[tam], nome2[tam];

    //scaneando primeiro nome
    printf("Digite o primeiro nome: \n");
    gets(nome1);

    //scaneando segundo nome
    printf("\ndigite o segundo nome: \n");
    gets(nome2);

    printf("\n");

    //conferindo ordem alfabética
    tam1 = strlen(nome1);
    tam2 = strlen(nome2);
    cmp = strcmp(nome1, nome2);

    if(cmp > 0)
    {
        tamlim = tam1;
    }

    else if(cmp < 0)
    {
        tamlim = tam2;
    }

    while(i <= tamlim)
    {
        if(nome1[i] < nome2[i])
        {
            puts(nome1);
            break;
        }

        else if(nome1[i] > nome2[i])
        {
            puts(nome2);
            break;
        }

        else
        {
            i++;
        }
    }

    return 0;
}
