#define ROWS 20
#define COLS 20

void rotate(int *type, int *x, int *y, int matrix[ROWS][COLS]){
    switch(*type){
        case 0:
            if((checklastrow(*x+2) == 1 && checkeachcols(*y) == 1) && (matrix[*x+1][*y] == 0 && matrix[*x+2][*y] == 0 && matrix[*x+3][*y] == 0)){
                /*Rotate the shape*/
                matrix[*x][*y+1] = 0;
                matrix[*x][*y+2] = 0;
                matrix[*x][*y+3] = 0;
                matrix[*x+1][*y] = 1;
                matrix[*x+2][*y] = 1;
                matrix[*x+3][*y] = 1;
                /*Change the status of the shape*/
                *type = 4;

            }
            break;
        case 1:
            if((checklastrow(*x+2) == 1 && checkeachcols(*y+2) == 1 && checkeachcols(*y+1) == 1) &&(matrix[*x][*y+2] == 0 && matrix[*x+2][*y+1] == 0)){
                /*Rotate the shape*/
                matrix[*x][*y] = 0;
                matrix[*x][*y+1] = 0;
                matrix[*x][*y+2] = 1;
                matrix[*x+2][*y+1] = 1;
                /*Change the status of the shape*/
                *type = 5;
            }
            break;
        case 2: 
            /*The rotated version of this shape is the shape itself so don't change it*/
            break;
        case 3:
            if((checklastrow(*x+2) == 1 && checkeachcols(*y) == 1) && (matrix[*x+2][*y] == 0)){
                /*Rotate the shape*/
                matrix[*x+1][*y-1] = 0;
                matrix[*x+2][*y] = 1;
                /*Change the status of the shape*/
                *type = 6;
            }
            break;
        case 4:
            if((checklastrow(*x) == 1 && checkeachcols(*y+3) == 1 && checkeachcols(*y+2) == 1) &&(matrix[*x][*y+1] == 0 && matrix[*x][*y+2] == 0 && matrix[*x][*y+3] == 0)){
                /*Rotate the shape*/
                matrix[*x+1][*y] = 0;
                matrix[*x+2][*y] = 0;
                matrix[*x+3][*y] = 0;
                matrix[*x][*y+1] = 1;
                matrix[*x][*y+2] = 1;
                matrix[*x][*y+3] = 1;
                /*Change the status of the shape*/
                *type = 0;
            }
            break;
        case 5:
            if((checklastrow(*x) == 1 && checkeachcols(*y) == 1 && checkeachcols(*y+1) == 1) && (matrix[*x][*y] == 0 && matrix[*x][*y+1] == 0)){
                /*Rotate the shape*/
                matrix[*x][*y+2] = 0;
                matrix[*x+2][*y+1] = 0;
                matrix[*x][*y] = 1;
                matrix[*x][*y+1] = 1;
                /*Change the status of the shape*/
                *type = 1;
            }
            break;
        case 6:
            if((checklastrow(*x+1) == 1 && checkeachcols(*y-1) == 1) &&(matrix[*x+1][*y-1] == 0)){
                /*Rotate the shape*/
                matrix[*x][*y] = 0;
                matrix[*x+1][*y-1] = 1;
                /*Change the status of the shape*/
                *type = 7;
            }
            break;
        case 7:
            if((checklastrow(*x) == 1 && checkeachcols(*y) == 1) && (matrix[*x][*y] == 0)){
                /*Rotate the shape*/
                matrix[*x+1][*y+1] = 0;
                matrix[*x][*y] = 1;
                /*Change the status of the shape*/
                *type = 8;
            }
            break;
        case 8:
            if((checklastrow(*x+1) == 1 && checkeachcols(*y+1) == 1) && (matrix[*x+1][*y+1] == 0)){
                /*Rotate the shape*/
                matrix[*x+2][*y] = 0;
                matrix[*x+1][*y+1] = 1;
                /*Change the status of the shape*/
                *type = 3;
            }
            break;


    }

}