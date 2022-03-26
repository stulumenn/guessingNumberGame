#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {

	int userGuess;
	int i, num3;
	int num4;

	printf("Pick a number between 1-10.\n");	
	scanf ("%d", &userGuess);
	
	srand(time(NULL));

	for (i = 1; i < 11; i++);
	{
	num3 = rand()%10 + 1;
	printf ("%d\n", num3);
	}
	int x = -5;
	x = absoulute(x);
	if (userGuess>=1 && userGuess<=10){
		
	}

	if (userGuess > 10 || userGuess < 1) {
		printf("You should've picked between 1-10!\n");
		return (0);
	}
	else if (userGuess - num3 == 0){
		printf("You won!\n");
		exit(0);
	}
	else if (absoulute(userGuess - num3) >= 5){
		printf ("You are too far from the number, try again\n");
		scanf ("%d", &num4);

		if (num4 < 1 || num4 > 10){
			printf("You should've picked between 1-10!\n");
			exit(0);
		}
		else if (userGuess - num4 == 0){
			printf("You won!\n");
			exit(0);
		}
		if  (userGuess - num4 >= 5 || num4 - userGuess >= 5){
			printf ("You are too far from the number and you lost\n");
			exit(0);
		}
		else if  (userGuess - num4 >= 3 || num4 - userGuess >= 3){
			printf ("You are far from the number and you lost\n");
			exit (0);
		}
		else if  (userGuess - num4 <= 2 || num4 - userGuess <= 2){
			printf ("You are close to the number but you lost\n");
			exit (0);
		}
			
	}

	else if  (userGuess - num3 >= 3 || num3 - userGuess >=3){
		printf ("You are far from the number, try again\n");
		scanf ("%d\n", &num4);
			if (num4 < 1 || num4 > 10){
				printf("You should've picked between 1-10!\n");
				exit(0);
			}
			else if (userGuess - num4 == 0){
				printf("You won!\n");
				exit(0);
			}
			if  (userGuess - num4 >= 5 || num4 - userGuess >= 5){
				printf ("You are too far from the number and you lost\n");
				exit(0);
			}
			else if  (userGuess - num4 >= 3 || num4 - userGuess >= 3){
				printf ("You are far from the number and you lost\n");
				exit(0);
			}
			else if  (userGuess - num4 <= 2 || num4 - userGuess <= 2){
				printf ("You are close to the number but you lost\n");
				exit (0);
			}
			
	}

	else if  (userGuess - num3 <= 2 || num3 - userGuess <= 2){
		printf ("You are close to the number, try again\n");
		scanf ("%d\n", &num4);
			if (num4 < 1 || num4 > 10){
				printf("You should've picked between 1-10!\n");
				exit(0);
			}
			else if (userGuess == num4){
				printf("You won!\n");
				exit(0);
			}
			if  (userGuess - num4 >= 5 || num4 - userGuess >= 5){
				printf ("You are too far from the number and you lost\n");
				exit(0);
			}
			else if  (userGuess - num4 >= 3 || num4 - userGuess >= 3){
				printf ("You are far from the number and you lost\n");
				exit(0);
			}
			else if  (userGuess - num4 <= 2 || num4 - userGuess <= 2){
				printf ("You are close to the number but you lost\n");
				exit (0);
			}
			
		}
	
	return (0);

}

int absoulute(int number) {
	if (number < 0){
		return -1 * number;
	}

	return number;
}