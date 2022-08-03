#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main (void)
{
	int x, sum = 0;

	for (x = 1; x < 100; x += 2)
	{
		sum = sum + x;
		printf("%d\t", x);
	}
	printf("\nsum: %d\n", sum);

	// using break and continue in a single code
	// accepts possitive ints and prints only odd numbers
	int num;

	while(1)
	{
		printf("Enter a number: ");
		scanf("%d", &num);

		if (num <= 0)
		{
			break;
		}
		if ((num % 2) == 0) // '(num % 2) != 0' to print only even numbers
		{
			continue;
		}
		printf("Number: %d\n", num);
	}
	
	return (0);
}
