#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char player, char comp)
{

	if (player == comp)
		return -1;
	if (player == 's' && comp == 'p')
		return 0;
			else if (player == 'p' && comp == 's') return 1;
	if (player == 's' && comp == 'z')
		return 1;
	else if (player == 'z' && comp == 's')
		return 0;
	if (player == 'p' && comp == 'z')
		return 0;
	else if (player == 'z' && comp == 'p')
		return 1;
}

int main()
{

	int n;
	char player, comp, result;

	srand(time(NULL));


	n = rand() % 100;

	if (n < 33)
		comp = 's';

	else if (n > 33 && n < 66)
		comp = 'p';


	else
		comp = 'z';

	printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER, z for SCISSOR\n\t\t\t\t\t\t\t");

	
	scanf("%c", &player);

	// Function Call to play the game
	result = game(player, comp);

	if (result == -1) {
		printf("\n\n\t\t\t\tGame Draw!\n");
	}
	else if (result == 1) {
		printf("\n\n\t\t\t\tWow! You Won!\n");
	}
	else {
		printf("\n\n\t\t\t\tOh! You Lost!\n");
	}
		printf("\t\t\t\tYou chose : %c and Computer chose : %c\n",player, comp);

	return 0;
}
