#include <stdio.h>
#include "drawboard.h"
#define ROWS 20
#define COLS 20
void drawboard(int *score, int matrix[ROWS][COLS], int *nexttype)
{
    for (int i = 0; i < ROWS; i++)
    {
        printf("|");
        for (int j = 0; j < COLS; j++)
        {
            if (matrix[i][j] == 1)
            {
                printf("[]");
            }
            else
            {
                printf("  ");
            }
            /*Handle special cases at the end of a row*/
            if (j == COLS - 1)
            {
                /*Show the score*/
                if (i == 4)
                {
                    printf("|\t\tYOUR SCORE =  %d\n", *score);
                }else if(i == 15){
                    /*Show what the next shape is*/
                    printf("|\t\tNEXT SHAPE: ");
                    switch(*nexttype){
                        case 0:
                            printf("    [][][][]\n");
                            break;
                        case 1:
                            printf("   [][]\n");
                            break;
                        case 2:
                            printf("    [][]\n");
                            break;
                        case  3:
                            printf("      []\n");
                            break;
                    }
                }else if(i == 16){
                    switch(*nexttype){
                        case 0:
                            printf("|\n");
                            break;
                        case 1:
                            printf("|              \t\t [][]\n");
                            break;
                        case 2:
                            printf("|              \t\t[][]\n");
                            break;
                        case 3:
                            printf("|              \t\t[][][]\n");
                            break;
                    }
                }
                else
                {
                    printf("|\n");
                }
            }
        }
    }
    printf("------------------------------------------\n");
}
