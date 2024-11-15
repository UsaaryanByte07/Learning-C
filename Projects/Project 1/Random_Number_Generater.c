#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num,userNum,guess_count = 0;

    //Generates the Random Number
    srand((time(0))); //Intializes the Random Number generater
    num = (rand()%100) + 1;
    
    do{
       printf("Enter Your Guess(1-100) : ");
       scanf("%d",&userNum); 
       
       //Checks whether the input is Valid or not
       while(userNum<1 || userNum>100){
          printf("Please Enter a Valid Guess(1-100) : ");
          scanf("%d",&userNum);
       }
       //Incrementing The number of Guesses
       guess_count++;
       
       //Evaluates the guess
       if (userNum == num){
            printf("You Have Guessed is Correct!!\nYour Guess : %d\nCorrect Number : %d\nAttempts Taken : %d\n",userNum,num,guess_count);
       } else if(userNum >= num){
            printf("Your Guess is a bit higher\n");
       } else{
            printf("Your Guess is a bit lower\n");
       }
    }while(userNum != num);
    return 0;
}