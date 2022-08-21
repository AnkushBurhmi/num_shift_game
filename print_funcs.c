#include <stdio.h>
#include <string.h>

void game_rules()
{
    printf("                      RULE OF THIS GAME                 "); NL;
    printf("1. You can move only 1 step at a time by arrow key"); NL;
    printf("Move Up     : by Up arrow key"); NL;
    printf("Move Down   : by Down arrow key"); NL;
    printf("Move Left   : by Left arrow key"); NL;
    printf("Move Right  : by Right arrow key"); NL;
    printf("2. You can move number at empty position only"); NL; NL;
    printf("3. For each valid move : your total number of move will decrease by 1"); NL;
    printf("4. Winning situaion : number in a 4*4 matrix should be in order from 1 to 15"); NL; NL;
    printf("             Winning Situaion:"); NL;
    
    //call function to print correct matrix here 
    print_matrix_default(); NL;
    printf("5. You can exit the game at any point of time by pressing \'E\' or \'e\'"); NL;
    printf("So Try to win the game in minimum number of moves"); NL; NL;
    printf("          Happy gaming, Good Luck"); NL; NL;
    printf("Enter any key to start........");
    getch();
}

void print_game_scheme(int n)
{
    printf("Hello GAMER , Moves remaining : %d", n);
}