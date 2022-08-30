#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main (void)
{
	int x;
	double y, z;

	system("clear");
	system("pause");
	for (x = 0; x <= 15; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz\n");
		else if (x % 3 == 0)
			printf("Fizz\n");
		else if (x % 5 == 0)
			printf("Buzz\n");
		else
			printf("%d\t", x);
	}

	return (0);
}
