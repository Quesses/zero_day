#include <stdio.h>

/** 
 * main - trial
 *
 * Return: Always 0
 */

int main()
{
	int i;

	i = 10;
	while (i < 20)
	{
		printf("%d", i % 2);
		i++;
	}
	return (0);
}
