#include "left.h"
#define ROWS 20
#define COLS 20
void left(int *type, int *x, int *y, int matrix[ROWS][COLS]){
    switch(*type){
        case 0:
            if(checkeachcols(*y-1) == 1 && (matrix[*x][*y-1] == 0)){
                /*Move the block to the left*/
                matrix[*x][*y+3] = 0;
                matrix[*x][*y-1] = 1;
                /*Update the position of the shape*/
                *y = *y - 1;
            }
            break;
        case 1:
            if(checkeachcols(*y-1) == 1 && (matrix[*x][*y-1] == 0 && matrix[*x+1][*y] == 0)){
                /*Move the block to the left*/
                matrix[*x][*y+1] = 0;
                matrix[*x+1][*y+2] = 0;
                matrix[*x+1][*y] = 1;
                matrix[*x][*y-1]=1;
                /*Update the position of the shape*/
                *y = *y-1;
            }
            break;
        case 2:
            if(checkeachcols(*y-1) == 1 && (matrix[*x][*y-1] == 0 && matrix [*x + 1][*y-1] == 0)){
                    /*Move the block to the left*/
                    matrix[*x][*y+1] = 0;
                    matrix[*x+1][*y+1]= 0;
                    matrix[*x][*y-1] = 1;
                    matrix[*x+1][*y - 1] = 1;
                    /*Update the position of the shape*/
                    *y = *y - 1;
            }
            break;
        case 3:
            if(checkeachcols(*y-2) == 1 && (matrix[*x][*y-1]==0 && matrix[*x+1][*y-2] == 0)){
                    /*Move the block to the left*/
                    matrix[*x][*y]=0;
                    matrix[*x+1][*y+1] = 0;
                    matrix[*x][*y-1]= 1;
                    matrix[*x+1][*y-2] = 1;
                    /*Update the position of the shape*/
                    *y = *y - 1;
            }
            break;
        case 4:
            if(checkeachcols(*y-1) == 1 && (matrix[*x][*y-1] == 0 && matrix[*x+1][*y-1] == 0 && matrix[*x+2][*y-1] == 0 && matrix[*x+3][*y-1] == 0)){
                //*Move the block to the left*/
                matrix[*x][*y] = 0;
                matrix[*x+1][*y] = 0;
                matrix[*x+2][*y] = 0;
                matrix[*x+3][*y] = 0;
                matrix[*x][*y-1] = 1;
                matrix[*x+1][*y-1] = 1;
                matrix[*x+2][*y-1] = 1;
                matrix[*x+3][*y-1] = 1;
                /*Update the position of the shape*/
                *y = *y -1;
            }
            break;
        case 5:
            if(checkeachcols(*y) == 1 &&(matrix[*x][*y+1] == 0 && matrix[*x+1][*y] == 0 && matrix[*x+2][*y] == 0)){
                /*Move the block to the left*/
                matrix[*x][*y+2] = 0;
                matrix[*x+1][*y+2] = 0;
                matrix[*x+2][*y+1] = 0;
                matrix[*x][*y+1] = 1;
                matrix[*x+1][*y] = 1;
                matrix[*x+2][*y] = 1;
                /*Update the position of the shape*/
                *y = *y -1;
            }
            break;
        case 6:
            if(checkeachcols(*y-1) == 1 && (matrix[*x][*y-1] == 0 && matrix[*x+2][*y-1] == 0 && matrix[*x+1][*y-1] == 0)){
                /*Move the block to the left*/
                matrix[*x][*y] = 0;
                matrix[*x+2][*y] = 0;
                matrix[*x+1][*y+1] = 0;
                matrix[*x][*y-1] = 1;
                matrix[*x+2][*y-1] = 1;
                matrix[*x+1][*y-1] = 1;
                /*Update the position of the shape*/
                *y = *y - 1;
            }
            break;
        case 7:
            if(checkeachcols(*y-2) == 1 && (matrix[*x + 1][*y-2] == 0 && matrix[*x+2][*y-1] == 0)){
                /*Move the block to the left*/
                matrix[*x+1][*y+1] = 0;
                matrix[*x+2][*y] = 0;
                matrix[*x + 1][*y-2] = 1;
                matrix[*x+2][*y-1] = 1;
                /*Update the position of the shape*/
                *y = *y - 1;
            }
            break;
        case 8:
            if(checkeachcols(*y-2) == 1 &&(matrix[*x][*y-1] == 0 && matrix[*x+2][*y-1] == 0 && matrix[*x+1][*y-2] == 0)){
                /*Move the block to the left*/
                matrix[*x][*y] = 0;
                matrix[*x+2][*y] = 0;
                matrix[*x+1][*y] = 0;
                matrix[*x][*y-1] = 1;
                matrix[*x+2][*y-1] = 1;
                matrix[*x+1][*y-2] = 1;
                /*Update the position of the shape*/
                *y = *y - 1;
            }
            break;
    }


}