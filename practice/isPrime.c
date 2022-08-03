#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

//** using recursion NOT WORKING
bool isPrime(int input)
{
	int div;

	for (div = sqrt(input); div > 1; div--)
	{
		if (input % div == 0)
		{
			return (false);
		}
	}
	return(true);
}

int main(void)
{
	int input;
	int x;
	
	input = 10;
	for (x = input; x > 1; x--)
	{
		bool prime = isPrime(x);
		if (prime) 
		{
			printf("%d is Prime!\n", x);
		} else
		{
			printf("%d is not Prime!\n", x);
		}
	}
	return (0);
}
