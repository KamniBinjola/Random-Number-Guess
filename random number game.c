#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int number;
int nguess;// number of guesses
srand(time(0));// to generate different number everytime
number=rand()%100+1;//generate number between 1 to 100
//printf("the number is %d\n",number);
//take input from user to guess number
int guess;
//we use do while loop here
do{
printf("enter your guess between 1 to 100\n");
scanf("%d",&guess);
if(guess>number){
printf("lower number\n");
}
else if(guess<number){
printf("higher number\n");
}
else{
printf("you guessed it in %d attempts\n",nguess);
}
nguess++;
}while(guess!=number);
return 0;
}
