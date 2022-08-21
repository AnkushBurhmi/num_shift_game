#include <conio.h>
#include <stdio.h>

int **convert_1D_to_2D(int m[16])
{
    extern int **mat;
    int i, j;
    int t = 0;

    mat = malloc(4*sizeof(int));
    for(i = 0; i < 4; i++)
    {
        mat[i] = malloc(4*sizeof(int));
    }

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            mat[i][j] = m[t];
            t+=1;            
        }
        printf("\n");
    }

    print_matrix(mat);

    return mat;
}