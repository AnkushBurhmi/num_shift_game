#include <stdio.h>
/*
void user_input_matrix(int arr[4][4])
{
    int i, j;

    printf("Enter the values pf 4x4 array: ");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
*/

/* This function is supposed to print the correct matrix to win the game */
void print_matrix_default()
{
    int i,  j, t = 1;
    printf("---------------------");
    printf("\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if (i == 3 && j == 3)
                continue;
            if (t <10)
                printf("| %d  ",t);
            else
                printf("| %d ",t);
            t+=1;
        }
        printf("|");
        if (t == 16)
            printf("    |");
        printf("\n");
    }
    printf("---------------------");
}

void print_matrix(int **arr)
{
    int i, j, t = 1;
    printf("---------------------");
    printf("\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if (i == 3 && j == 3)
            {
                continue;
            }
            if (arr[i][j] < 10)
                printf("| %d  ",arr[i][j]);
            else
                printf("| %d ",arr[i][j]);
            t+=1;
        }
        printf("|");
        if(t == 16)
            printf("    |");
        printf("\n");
    }
    printf("---------------------");

}

