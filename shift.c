#define ROWS 20
#define COLS 20
void shift(int i, int matrix[][COLS]){
    /*shift every row down*/
    for(i; i >= 1; i--){
        for(int j = 0; j < COLS; j++){
            matrix[i][j] = matrix[i-1][j];
        }
    }
    /*delete the first row*/
    for(int j = 0; j < COLS; j++){
        matrix[0][j] = 0;
    }
}