#include <stdio.h>
#include "drawboard.h"
#include "deleterow.h"
#include "shift.h"
#include "checkeachrow.h"
#define ROWS 20
#define COLS 20
void checkeachrow(int *score, int matrix[ROWS][COLS], int *nexttype){
    int i;
    for(i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            if(matrix[i][j] == 0){
                break;
            }
            if(j == COLS - 1 && matrix[i][j] == 1){
                printf("hi");
                /*When a row is filled, delete it*/
                deleterow(i, score, matrix);
                /*After a row is deleted shift the rows above down by 1*/
                shift(i);
                usleep(500000);
                drawboard(score, matrix, nexttype);
            }
        }
    }
}