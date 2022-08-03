#include <stdio.h>

/**
 * main - check this code
 * Return: 0.
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 10; x++)
	{
		for (y = x; y >= 0; y--)
		{
			printf("%d ", y);
		}
		printf("\n");
	}

	return (0);
}
