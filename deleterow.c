#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "deleterow.h"
#define ROWS 20
#define COLS 20
void deleterow(int i, int *score,int matrix[][COLS]){
    for(int j = 0; j < COLS; j++){
        matrix[i][j] = 0;
    }
    /*Update the score when a row is deleted*/
    *score = *score + 10;
}