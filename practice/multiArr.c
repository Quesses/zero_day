#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main (void)
{
	int const row = 4;
	int const column = 4;
	int grades[4][4] = {
		[10,22,78,34],
		[87,88,98,74],
		[11,44,65,76],
		[64,65,77,92],
	};

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("%d ", grades[i][j]);
		}
		printf("\n");
	}

	return (0);
}
