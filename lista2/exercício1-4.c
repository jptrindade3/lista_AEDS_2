#include <stdio.h>
#include <stdlib.h>
#define valmax 100

int main()
{
    int flag, ind, vet[valmax], i, j;

    //determinando flag
    printf("Digite qual valor ser� sua flag: ");
    scanf("%d", &flag);
    //instancia a ser removida
    printf("Digite o valor a ser descartado do vetor: ");
    scanf("%d", &ind);

    //composi��o do vetor
    for(i=0; i<valmax; i++)
    {
        scanf("%d", &vet[i]);
        if(vet[i] == flag)
        {
            break;
        }
    }

    printf("\n");

    //impress�o do resultado
    for(j=0; j<=i; j++)
    {
        if(vet[j] != ind && vet[j] != flag)
        {
            printf("%d ", vet[j]);
        }
    }

    return 0;
}
