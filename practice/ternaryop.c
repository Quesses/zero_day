#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main (void)
{
	int x;

	for (x = 1; x <= 15; x++)
	{
		(x % 3 == 0) ?
			((x % 5 == 0) ?
			 printf("FizzBuzz\n") :
			 printf("Fizz\n")) :
			((x % 5 == 0) ?
			 printf("Buzz\n") :
			 printf("%d\t", x));
	}
			      
		//(x % 3 == 0 && x % 5 == 0)?
		//	(printf("FizzBuzz\n")):
		//	printf("%d\t", x);
		//(x % 3 == 0)? printf("Fizz\n"): printf("%d\t", x);
		//(x % 5 == 0)? printf("Buzz\n"): printf("%d\t", x);

	return (0);
	}
