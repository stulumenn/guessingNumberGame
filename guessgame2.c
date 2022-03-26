#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define true 1
#define false 0
#define MAX_GUESS 2


int main() {
	int userGuess;
	int myNumber;
	int flag = true;
	int i = 0;

	printf("Welcome to the guessing game\n");
	srand(time(NULL));
	myNumber = rand() % 10 + 1;

	for (i = 0; i < MAX_GUESS && flag == true; ++i)
	{
		printf("Pick a number between 1-10.\n");	
		scanf ("%d", &userGuess);

		if(userGuess < 1 || userGuess > 10) {
			printf("Your guess is not range!!!\n");
		}
		else if (abs(userGuess - myNumber) >= 5){
			printf ("You are too far from the number, try again\n");
		} 
		else if (abs(userGuess - myNumber) >= 3){
			printf ("You are far from the number\n");
		}
		else if (abs(userGuess - myNumber) >= 1){
			printf ("You are close to the number\n");
		}
		else if (abs(userGuess - myNumber) == 0){
			printf("You won!\n");
			flag = false;
		}
	}

	if(i == MAX_GUESS) {
		printf("You lost\n");
	}
}