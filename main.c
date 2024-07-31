#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <unistd.h>
#include <conio.h>
#include "drawboard.h"
#include "shape.h"
#include "fall.h"
#include "right.h"
#include "rotate.h"
#include "checklastrow.h"
#include "deleterow.h"
#include "shift.h"
#include "checkeachcols.h"
#include "random.h"


#define ROWS 20
#define COLS 20
int main(){
    char checkgame = 'p';
    int checkgamevalue = 1;
    /*Main game loop: This loop manages the overall flow of the game*/
    while(checkgamevalue){
        int matrix[ROWS][COLS] = {  
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
        };
        int changespeed = 900000;
        int shapetype;
        printf("Welcome to the realm of excitement.\n");
        printf("Shape shift time! Type 0 for 90 degrees or 1 for 180. Your call, gamer: ");
        scanf("%d", &shapetype);
        int check = 1;
        int *score = 0;
        int isblockmoving = 0;
        int type = random();        
        /*Sub loop that manages the core gameplay mechanics*/
        while(check){
            int x, y, nexttype;
            /*Initialize a new block when the current block stops moving*/
            if(isblockmoving == 0){
                nexttype = random();
                shape(&type, &x, &y, &isblockmoving, &check, matrix);
                drawboard(&score, matrix, &nexttype);
            }else if(isblockmoving == 1){
                /*Handling the user input*/
                if(kbhit()){
                    char input = getch();
                    if(input == 'a'){
                        left(&type, &x, &y, matrix);
                    }else if(input == 'd'){
                        right(&type, &x, &y, matrix);
                    }else if(input == ' '){
                        if(shapetype == 0){
                            rotate(&type, &x, &y, matrix);
                        }else if(shapetype == 1){
                            rotate(&type, &x, &y, matrix);
                            rotate(&type, &x, &y, matrix);
                        }else{
                            printf("invalid input");
                        }

                    }else if(input == 's' && changespeed != 500000){
                        changespeed = changespeed - 200000;
                    }
                }
                fall(&type, &x, &y, &isblockmoving, matrix);
                usleep(changespeed);
                system("cls");
                if(isblockmoving == 1){
                    drawboard(&score, matrix, &nexttype);
                }
                /*Check When a new block spawns and set the speed to the starting speed*/
                if(isblockmoving == 0){
                    changespeed = 900000;
                    type = nexttype;
                }
                checkeachrow(&score, matrix, &type);
                }

        } 
        printf("Oops! Defeat is bitter, but fear not! Learn from this setback and return stronger than ever!\n");
        printf("Your final score is: %d\n", score);
        /*Check if the user wants to play again or exit the game*/
        while(checkgamevalue){
            printf("press p to restart the game or t to end the game\n");
            fflush(stdin);
            scanf("%c", &checkgame);
            if(checkgame == 't'){
                checkgamevalue = 0;
            }else if(checkgame == 'p'){
                break;
            }else{
                printf("invalid input\n");
            }
        }
    }
    return 0;
    }
    

    
