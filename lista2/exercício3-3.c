#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3], i, j, det;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            m[i][j] = rand()% 21 + (-10);
        }
    }

    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            printf("%d\t", m[i][j]);
        }
    }

    det = (((m[0][0])*(m[1][1])*(m[2][2]))+((m[0][1])*(m[1][2])*(m[2][0]))+((m[0][2])*(m[1][0])*(m[2][1])))-(((m[2][0])*(m[1][1])*(m[0][2]))+((m[2][1])*(m[1][2])*(m[0][0]))+((m[2][2])*(m[1][0])*(m[0][1])));

    if(det != 0)
    {
        printf("\nPossui inversa");
    }
    else
    {
        printf("\nNao possui inversa");
    }

    return 0;
}
