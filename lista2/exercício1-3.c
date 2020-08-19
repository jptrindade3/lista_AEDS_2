#include <stdio.h>
#include <stdlib.h>
#define TAMMAX 100

void encontra_valor(int vetor[TAMMAX], int x)
{
    int par[x], impar[x], j, p=0, i=0, pp, pi, k=0, l=0;

    for(j=0; j<x; j++)
    {
        if(vetor[j]%2 == 0)
        {
            while(k<x)
            {
                if(par[k] != vetor[j])
                {

                    if(k == x-1)
                    {
                        par[p] = vetor[j];
                        p++;
                    }
                    k++;
                }
                else if(par[k] == vetor[j])
                {
                    break;
                }
            }
            k=0;

        }
        else
        {
            while(l<x)
            {
                if(impar[l] != vetor[j])
                {

                    if(l == x-1)
                    {
                        impar[i] = vetor[j];
                        i++;
                    }
                    l++;
                }
                else if(impar[l] == vetor[j])
                {
                    break;
                }
            }
            l=0;
        }
    }
    printf("\n");

    for(pp=0; pp<p; pp++)
    {
        printf("%d ", par[pp]);
    }

    printf("\n");

    for(pi=0; pi<i; pi++)
    {
        printf("%d ", impar[pi]);
    }
}


int main()
{
    int vet[TAMMAX], par[TAMMAX], impar[TAMMAX], i, aux, ret;

    printf("Digite os valores desejados\nQuando acabar a lista, digite uma letra qualquer\n");

    for(i=0; i<TAMMAX; i++)
    {
        ret = scanf("%d", &aux);
        if(ret == 0)
        {
            break;
        }
        else
        {
            vet[i] = aux;
        }
    }

    encontra_valor(vet, i);

    return 0;
}
