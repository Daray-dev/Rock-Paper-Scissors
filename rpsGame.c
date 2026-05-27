// C program for the above approach
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function to implement the game
int game(char you, char computer) 
   {
    // if both the user and computer
    // has choose the same thing
    if (you == computer) {
        return -1;
    

    //if user's choice is stone and
    //computer's choice is paper
    if (you == 's' && computer =='p')
        return 0;

        //if user's choice is paper and 
        //computer choice is stone
        else if (you == 'p' && computer == 's')
           return 1;
  
    }
    }
int main() 
{
    
    // Stores the random number
    int n;
    
    char you, computer, results;

    // Choose the random number
    // every time
    srand(time(NULL));
    
    // make the random number less
    // than 100, divided it by 100
    n = rand() % 100;

    // using simple probability 100 is 
    // roughly divided among stone,
    // paper, and scissor
    if (n < 33)
    
    // s is denotuing Stone
    computer = 's';

    else if (n > 33 && n < 66)

    // p is denoting Stone
    computer = 'p';

    // z is denoting Scissor 
    else 
        computer = 'z';
       
    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");

    //input from user
    scanf("%c", &you);

    // functions call to play the game
    results = game(you, computer);

    if (results == -1) 
    {
        printf("\n\n\t\t\tWow! You have won the game!\n");
    } else if (results == 1){
       printf("\n\n\t\t\tOh! You have lost the game!\n");
    } else {
        printf("\n\n\t\t\t\tOh! you have lost the game\n");
    }
        printf("\t\t\t\tYou choose: %c and Computer choose : %c\n", you, computer);

    return 0;



}