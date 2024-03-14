//Task-02
//Build a program that generates a random number and challenges the user to guess it.
//The program should prompt the user to input their guess,compare it to the generated
//number ,and provide feedback if the guess is too high or too low.it should continue until
// the user correctly guesses the number and then display the number of attempts it took to
//win the game.

#include<stdio.h>
int main(){
int value,attempt=1;
printf("Enter a Random value:");
scanf("%d",&value);

int guess=0,i;
 printf("Enter a value to guess to guess value is equal to random value: ");
              scanf("%d",&guess);
for(i=1;i<=100;i++){
       if(value==guess){
              printf("Congratulations:");
              printf("\nno of attempt is:%d",attempt);
              break;
       }
       else{
              printf("plz again enter a value:");
              scanf("%d",&guess);
              attempt++;
       }
}
if(attempt<=10){
       printf("\nyour guessing capacity is to too High.");
}
else{
       printf("\nyour guessing capacity is to too Low.");
}

return 0;

}

