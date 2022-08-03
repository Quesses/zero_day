#include <stdio.h>

int main(void)
{
	int c, ch, a;

	a = 2;
	printf("%d, %d, %d, %d\n", a++, ++a, a++, ++a);

	printf("enter a character: \n");
	c = getchar();
	getchar();

	printf("you entered: %c\n", c);
	putc(c, stdout);
	putc('g', stdout);
	putc('\n', stdout);
	putc('\n', stdout);
	putc('\n', stdout);

	printf("enter another character: \n");
	ch = getc(stdin);
	getc(stdin);
	printf("you entered(getc): %c\n", ch);
	putchar('a');
	putchar(ch);
	putchar('9');
	putchar('\n');

	printf("enter a number: ");
	c = getchar() - '0';
	getchar();
	printf("number: %d\n", c);

	return (0);
}
