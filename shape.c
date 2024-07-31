#define ROWS 20
#define COLS 20
void shape(int *type, int *x, int *y,int *isblockmoving, int *check, int matrix[ROWS][COLS]){
    *isblockmoving = 1;
    if(matrix[1][8] == 0 && matrix[1][9] == 0 && matrix[1][10]== 0 && matrix[1][11]== 0 && matrix[0][8]== 0 && matrix[0][9]== 0 && matrix[0][10]== 0 && matrix[0][11] == 0){
        *check = 1;
        /*At the start of the game make the shape at the top and middle of the board 
        and Give the position of the first block so we change it in other functions*/
        switch(*type){
            case 0:
                matrix[0][8] = 1;
                matrix[0][9] = 1;
                matrix[0][10] = 1;
                matrix[0][11] = 1;
                *x = 0;
                *y = 8;
                break;
            case 1:
                matrix[0][8] = 1;
                matrix[0][9] = 1;
                matrix[1][9] = 1;
                matrix[1][10] = 1;
                *x = 0;
                *y = 8;
                break;
            case 2:
                matrix[0][8] = 1;
                matrix[0][9] = 1;
                matrix[1][8] = 1;
                matrix[1][9] = 1;
                *x = 0;
                *y = 8;
                break;
            case 3:
                matrix[0][9] = 1;
                matrix[1][9] = 1;
                matrix[1][8] = 1;
                matrix[1][10] = 1;
                *x = 0;
                *y = 9;
                break;
        }
    }else{
        /*Update the status of check*/
        *check = 0;
    }
}
