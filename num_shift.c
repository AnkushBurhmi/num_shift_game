#include <conio.h>
#include <stdio.h>


int detect_arrow_keys(int *n, int *m, int **matr)
{
    int ch1, ch2=0;
    int temp=0;
    int r = *n;
    int c = *m;

    ch1 = getch();
    if (ch1 == 0xE0) // scroll key was pressed
    {
        ch2 = getch();
        switch(ch2)
        {
            case 72:
            {// UP
                temp = matr[r][c] + matr[r-1][c];
                matr[r-1][c] = temp - matr[r-1][c];
                matr[r][c] = temp - matr[r][c];         
                print_matrix(matr);                
                break;
            }
            case 80:
            {// DOWN
                
                break;
            }
            case 75:
            {// LEFT
                
                break;
            }
            case 77:
            {// RIGHT
                
                break;
            }
        }
    }

    return 0;
}

void start_shift_game(int *a, int **matr) // here a is the number of tries
{
    int *x;
    int *y;
    *x = 3;
    *y = 3;
    
    if (*x >= 0 && *y >= 0)
    {
        detect_arrow_keys(x,y,matr);
    }
        
    *a -= 1; // decrement value of a after every trial
}

