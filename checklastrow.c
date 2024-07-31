#include "checklastrow.h"
#define ROWS 20
#define COLS 20
int checklastrow(int x){
    if(x < ROWS){
        return 1;
    }else{
        return 0;
    }
}