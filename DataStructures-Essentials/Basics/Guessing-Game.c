#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char** argv){
    int randomNumber=0;
    time_t t;
    int chances=5;
    srand((unsigned)time(&t)); //providing a seed value to the rand() function for the purpose of generating a random number
    randomNumber = rand() %21;
    while(chances>0){
        chances--;
        printf("Enter your guess: ");
        int guess;
        scanf("%d",&guess);
        if(guess==randomNumber){
            printf("hurrahh! You guessed it right.\n");
            break;
        }else{
            printf("Wrong guess! Try again!!\nYou have %d chances left.\n",chances);
        }
    }
//    double k=0;
//    for(k=0.0;k<3.0;k++){
//        printf("%lf",k);
//    }
//    int kj = -3;
//    kj++;
//    printf("%d",kj);
    return 0;
}
