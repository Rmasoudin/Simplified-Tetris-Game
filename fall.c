#define ROWS 20
#define COLS 20
void fall(int *type,int *x, int *y, int *isblockmoving, int matrix[ROWS][COLS]){
    switch(*type){
        case 0:
            if(checklastrow(*x+1) == 1 && (matrix[*x+1][*y] == 0 && matrix[*x+1][*y+1] == 0 && matrix[*x+1][*y+2] == 0 && matrix[*x+1][*y+3] == 0)){
                /*Move the block down*/
                matrix[*x][*y] = 0; 
                matrix[*x][*y+1] = 0;
                matrix[*x][*y+2] = 0;
                matrix[*x][*y+3] = 0;
                matrix[*x+1][*y] = 1;
                matrix[*x+1][*y+1] = 1;
                matrix[*x+1][*y+2] = 1;
                matrix[*x+1][*y+3] = 1;
                /*Update the position of the shape and the status of isblockmoving*/
                *x = *x + 1;
                *isblockmoving = 1;
            }else{
                *isblockmoving = 0;
            }
            break;
        case 1:
            if(checklastrow(*x+2) == 1 && (matrix[*x+1][*y]==0 && matrix[*x+2][*y+2]==0 && matrix[*x+2][*y+1] == 0)){
                /*Move the block down*/
                matrix[*x][*y]=0;
                matrix[*x+1][*y+2]=0;
                matrix[*x][*y+1] =0; 
                matrix[*x+1][*y]=1;
                matrix[*x+2][*y+2]=1;
                matrix[*x+2][*y+1]=1;
                /*Update the position of the shape and the status of isblockmoving*/
                *x = *x +1;
                *isblockmoving = 1;
            
            }else{
                *isblockmoving = 0;
            }
            break;
        case 2:
            if(checklastrow(*x+2) == 1 && (matrix[*x + 2][*y] == 0 && matrix[*x + 2][*y + 1] == 0)){
                /*Move the block down*/
                matrix[*x][*y] = 0;
                matrix[*x][*y+1] = 0;
                matrix[*x + 2][*y] = 1;
                matrix[*x + 2][*y + 1] = 1;
                /*Update the position of the shape and the status of isblockmoving*/
                *x = *x + 1;
                *isblockmoving = 1;
                 
            }else{
                *isblockmoving = 0;
            }
            break;
        case 3:
            if(checklastrow(*x+2) == 1 && (matrix[*x + 2][*y] == 0 && matrix[*x + 2][*y-1] == 0 && matrix[*x+2][*y+1] == 0)){
                /*Move the block down*/
                matrix[*x][*y] = 0;
                matrix[*x+1][*y] = 0;
                matrix[*x+1][*y-1] = 0;
                matrix[*x+1][*y+1] = 0;
                matrix[*x+1][*y] = 1;
                matrix[*x + 2][*y] = 1;
                matrix[*x + 2][*y-1] = 1;
                matrix[*x + 2][*y+1] = 1;
                /*Update the position of the shape and the status of isblockmoving*/
                *x = *x + 1;
                *isblockmoving = 1;
                
            }else{
                *isblockmoving = 0;
            };
            break;
        case 4:
            if(checklastrow(*x+4) == 1 && (matrix[*x+4][*y] == 0)){
                /*Move the block down*/
                matrix[*x][*y] = 0;
                matrix[*x+4][*y] = 1;
                /*Update the position of the shape and the status of isblockmoving*/
                *x = *x + 1;
                *isblockmoving = 1;
            }else{
                *isblockmoving = 0;
            }
            break;
        case 5:
            if(checklastrow(*x+3) == 1 && (matrix[*x+3][*y+1] == 0 && matrix[*x+2][*y+2] == 0)){
                /*Move the block down*/
                matrix[*x+1][*y+1] = 0;
                matrix[*x][*y+2] = 0;
                matrix[*x+3][*y+1] = 1;
                matrix[*x+2][*y+2] = 1;
                /*Update the position of the shape and the status of isblockmoving*/
                *x = *x + 1;
                *isblockmoving = 1;
            }else{
                *isblockmoving = 0;
            }
            break;
        case 6:
            if(checklastrow(*x+3) == 1 && (matrix[*x+3][*y] == 0 && matrix[*x+2][*y+1] == 0)){
                /*Move the block down*/
                matrix[*x][*y] = 0;
                matrix[*x+1][*y+1] = 0;
                matrix[*x+3][*y] = 1;
                matrix[*x+2][*y+1] = 1;
                /*Update the position of the shape and the status of isblockmoving*/
                *x = *x + 1;
                *isblockmoving = 1;

            }else{
                *isblockmoving = 0;
            }
            break;
        case 7:
            if(checklastrow(*x+3) == 1 && (matrix[*x+2][*y-1] == 0 && matrix[*x+2][*y+1] == 0 && matrix[*x+3][*y] == 0)){
               /*Move the block down*/
               matrix[*x+1][*y-1] = 0;
               matrix[*x+1][*y+1] = 0;
               matrix[*x+1][*y] = 0;
               matrix[*x+2][*y-1] = 1;
               matrix[*x+2][*y+1] = 1;
               matrix[*x+3][*y] = 1;
               /*Update the position of the shape and the status of isblockmoving*/
               *x = *x +1;
               *isblockmoving = 1;
            }else{
                *isblockmoving = 0;
            }
            break;
        case 8:
            if(checklastrow(*x+3) == 1 && (matrix[*x + 3][*y] == 0 && matrix[*x+2][*y-1] == 0)){
                /*Move the block down*/
                matrix[*x][*y] = 0;
                matrix[*x+1][*y-1] = 0;
                matrix[*x+2][*y-1] = 1;
                matrix[*x+3][*y] = 1;
                /*Update the position of the shape and the status of isblockmoving*/
                *x = *x + 1;
                *isblockmoving = 1;
            }else{
                *isblockmoving = 0;
            }
            break;

}
}

