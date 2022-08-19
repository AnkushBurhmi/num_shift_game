#include <stdio.h>

void rand_matrix()
{
    int arr[4][4];
    int i, j;

    printf("Enter the values pf 4x4 array: ");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("\t%d\t",arr[i][j]);
        }
        printf("\n");
    }

}