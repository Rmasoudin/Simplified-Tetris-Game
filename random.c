#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "random.h"
/*Generate a random number between 0 and 3 for the types of shapes*/
int random(){
srand(clock() + time(NULL) + M_PI);
return rand() % 4;
}