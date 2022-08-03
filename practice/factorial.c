#include <stdio.h>

/**
 * factorial - print the factorial of given int using recursion
 * description: recursion is when a function invokes itself
 * @x: given int
 *
 * Return: factorial value.
 */
int factorial(int x)
{
	int retval = 1;

	if (x != 1)
	{
		retval = x * factorial(x - 1);
	}
	return (retval);
}

/**
 * main - source code that invokes factorial
 *
 * Return: 0 on success.
 */
int main(void)
{
	int val = factorial(10);
	int test;

	{
		printf("%d! = %d\n", 10, val);
		printf("%d! = %d\n", 5, factorial(5));
	}
	test = factorial(7);
	{
		printf("%d! = %d\n", 7, test);
	}
}
