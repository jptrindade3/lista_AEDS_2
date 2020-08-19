#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i=1, j, *p=NULL;

    printf("Digite os valores desejados;\nCaso deseje finalizar a sequência, digite um valor negativo\n");
    while(x >= 0)
    {
        scanf("%d", &x);
        p =(int*)realloc(p, sizeof(int)*i);
        p[i-1] = x;
        i++;
    }
    return 0;
}
