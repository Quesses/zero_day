#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)
{
	cc = &ccc;
	ccc = 'l';
	printf("Value of 'cc': %p\n", cc);
	printf("Value of 'ccc' %c\n", ccc);
	printf("Address of 'ccc' %p\n", &ccc);
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;
	char *x, y;

	p = &c;
	c = 'H';
	printf("Value of 'p' is: %p\n", p);
	printf("Value of 'c' is: %c\n", c);
	printf("Address of 'c' is: %p\n", &c);
	modif_my_char_var(x, y);

	/****
	printf("The value of 'y' after calling modif is: %c\n", y);
	printf("The address of 'x' after is: %p\n", x);
	printf("The value of'*x' after is: %c\n", *x);
	***/

	return (0);
}
