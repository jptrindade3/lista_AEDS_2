#include <stdio.h>
#include <stdlib.h>
#define valmax 10

int main()
{
    int vet[valmax], i, prodn;

    //entrada do valor
    printf("Digite um valor entre -50 e 50:");
    scanf("%d", &prodn);

    //Preenchimento do vetor e da tabela
    printf("Indices\tValores\n");
    vet[0]=prodn;
    for(i=0; i<valmax; i++)
    {
        printf("%d\t%d\n", i, vet[i]);
        vet[i+1]=vet[i]*2;
    }

    return 0;
}
