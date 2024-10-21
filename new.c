#include <stdio.h>
#include <time.h>
int main(){
    printf("Guess a number between 1 and 100");
    srand(time(0));
    int random = (rand()%100)+1;
    int guess;
    int count = 0;
    do{
        printf("\nYour guess: ");
        scanf("%d",&guess);
        count+=1;
        if(guess == random){
            printf("Bingo! Number of attempts were %d.",count);
            break;
        }
        else if(guess < random){
            printf("Try a bigger number");
        }
        else{
            printf("Try a smaller number");
        }
    }
    while(guess != random);
return 0;
}
