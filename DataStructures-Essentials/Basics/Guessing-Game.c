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
    double arr[500] = {[2]=100.0,[1]=34.5,[499]=1012.2};
    double arr2[500] = {[2]=100.0,[1]=34.5,11.2,22.4,33.6,[499]=1012.2};
    printf("%f\n",arr2[499]); //1012.200000
    printf("%f\n",arr2[2]); //11.200000
    printf("%f\n",arr2[3]); //22.400000
    
//    double k=0;
//    for(k=0.0;k<3.0;k++){
//        printf("%lf",k);
//    }
//    int kj = -3;
//    kj++;
//    printf("%d",kj);
    return 0;
}
