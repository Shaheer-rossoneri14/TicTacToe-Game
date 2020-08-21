#include<stdio.h>

char matrix[3][3];

char check (void);
char init_matrix (void);
void get_player_move (void);
void get_computer_move (void);
void disp_matrix (void);

int main (void)
{
    char done;
    printf("This is the game of Tic-Tac-Toe\n");
    printf("You will be playing against Computer\n");

    done= ' ';
    init_matrix(void)

    do {
        disp_matrix();
        get_player_move();
        done=check();
        if (done!= ' ')
            break;
        get_computer_move();
        done=check();
        }

    while (done==' ');
    if (done=='x') printf("You won!\n");
    else printf("I won!\n");
    disp_matrix();
    return 0
}





