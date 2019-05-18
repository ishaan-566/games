#include"ishaan.h"
void Start();
void GetResults();
int i, j, life, maxrand;
char c;
void Start()
{
	i = 0;
	j = 0;
	life = 0;
	maxrand = 6;
	fflush(stdin);
	printf("Select difficulty mode:\n"); // the user has to select a difficutly level
	printf("1 : Easy (0-15)\n");
	printf("2 : Medium (0-30)\n");
	printf("3 : Difficult (0-50)\n");
	printf("or type another key to quit\n");
	c = 30;
	scanf("%c",&c);                   // read the user's choice
	printf("\n");
	fflush(stdin);
	switch (c)
	 {
		case '1':
			maxrand = 15;  // the random number will be between 0 and maxrand
			break;
		case '2':
			maxrand = 30;
			break;
		case '3':
			maxrand = 50;
			break;
		default:
			exit(0);
		break;
	}
	life = 5;         // number of lifes of the player
	srand((unsigned)time(NULL)); // init Rand() function
	j = rand() % maxrand;  // j get a random value between 0 and maxrand
	GetResults();
}
void GetResults()
{
	if (life <= 0) { // if player has no more life then he loses
		printf("You lose !\n\n");
		system("pause");
		system("cls");
		Start();
	}
	printf("Type a number: \n");
	scanf("%d",&i);
	if((i>maxrand) || (i<0)) { // if the user number isn't correct, restart
		printf("Error: number not between 0 and %d\n",maxrand);
		GetResults();
	}

	if(i == j)
	{
		printf("YOU WIN!\n\n"); // the user found the secret number
		system("pause");
		system("cls");
		Start();
	} else if(i>j) {
		printf("Too BIG\n");
		life = life - 1;
		printf("Lives remaining: %d\n\n",life);
		GetResults();
	} else if(i<j) {
		printf("Too SMALL\n");
		life = life - 1;
		printf("Lives remaining: %d\n\n",life);
		GetResults();
	}
}

int main() {
	printf("** Jackpot game **\n");
	printf("The goal of this game is to guess a number.\n");
	printf("Jackpot will tell you if the number is too big or too\n");
	printf("small compared to the secret number to find.\n\n");
	Start();
	getch();
	return 0;
}
