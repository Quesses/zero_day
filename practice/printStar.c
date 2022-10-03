#include <stdio.h>

int main()
{
	int rows = 5;
	int i, j, sp;

	for (i = 1; i <= rows; i++)
	{
		for (sp = 1; sp <= (rows - i); sp++)
			printf(" ");
		for (j = 1; j <= ((i * 2) - 1); j++)
			printf("*");
		putchar('\n');
	}
	return (0);
}
