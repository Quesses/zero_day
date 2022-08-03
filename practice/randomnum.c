#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
main - prints a random number
pseudo randome number
Return: 0
*/
int main(void)
{
	srand(time(NULL) % 11); //keeps the random number in a range of 0 - 10
	int randomNum = rand();
	printf("%d\n", randomNum);

	//TODO make this a loop that keeps asking the user for a number till you input the randome number
	return (0);
}
