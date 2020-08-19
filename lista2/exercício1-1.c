#include <stdio.h>
#include <stdlib.h>
#define VALMAX 100

int main()
{
    int vet[VALMAX], x, i;
    int soma=0, prod=1 , par=0, pos=0, neg=0 , zero=0;

    printf("Quantos inteiros devem ser lidos?: ");
    scanf("%d",&x);

    for(i=0; i<x; i++)
    {
        scanf("%d", &vet[i]);
    }

    //Soma dos valores
    for(i=0; i<x; i++)
    {
        soma = soma + vet[i];
    }
    printf("%d", soma);

    //Produto dos valores
    for(i=0; i<x; i++)
    {
        prod = prod * vet[i];
    }
    printf("\n%d", prod);

    //Qnt. valores pares
    for(i=0; i<x; i++)
    {
        if(vet[i]%2 == 0)
        {
            par++;
        }
    }
    printf("\n%d", par);

    //Qnt. valores positivos
    for(i=0; i<x; i++)
    {
        if(vet[i] > 0)
        {
            pos++;
        }
        else if(vet[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    printf("\n%d\n%d\n%d", pos, neg, zero);

    return 0;
}
