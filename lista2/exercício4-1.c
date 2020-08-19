#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i, *p=NULL;

    printf("Digite o numero de entradas que deseja, contando que seja menor ou igual a 5: ");
    scanf("%d", &x);

    p = (int*) malloc(x*sizeof(int));

    if(p != NULL)
    {
        for(i=0; i<x; i++)
        {
            fflush(stdin);
            scanf("%d", &*(p+i));
        }
    }

    printf("Os valores escaneados foram:\n");
    for(i=0; i<x; i++)
    {
        printf("%d ", *(p+i));
    }

    free(p);
    p = NULL;

    return 0;
}
