#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defines.h"
#include "rand_matrix.c"
#include "array_to_matrix_convert.c"
#include "print_funcs.c"
#include "num_shift.c"


int **mat;

int main()
{
    // Number of moves
    int *n;
    int i;
    
    // For now giving hardcoded rand array
    int a[16] = {5,8,6,9,14,13,3,1,2,7,15,4,12,11,10};
    int **b;
    CLR;
        
    game_rules();

    CLR;

    *n = 40;
    print_game_scheme(*n);
    b = convert_1D_to_2D(a);

    while (*n > 0)
        start_shift_game(n,b);
    
    
    // before ending the program, we need to delete allocated memory
    // and also remove the possibilty of dangling pointer

    getch();
    for(i = 0; i<4; i++)
    {
        free(mat[i]);
    }

    free(mat);

    b = NULL;
    

    return 0;
}