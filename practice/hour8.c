#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main (void)
{
	//hour 8 exercises
	int x = 96;
	int y = 1, z;


	z = x && y;
	printf("x and y: %d\n", z);

	z = x || y;
	printf("x or y: %d\n", z);
	printf("!y: %d\n", !y);

	z = 69;
	int i = !y ? x == z : y;
	printf("x is %d,  y is %d,  z is %d\n", x, y, z);
	printf("exp: %d\n", i);

	int xf = 0xEFFF;
	int yf = 0x1000;
	
	printf("xf: %d i.e 0x%X, yf: %d i.e 0x%X\n", xf, xf, yf, yf);
	printf("~xf is 0x%X\t~yf is 0x%X\n", ~xf, ~yf);
	printf("!xf is %X\t %d\t %u\n", !xf, !xf, !xf);
	printf("!yf is %X\t %d\t %u\n", !yf, !yf, !yf);

	x = 123;
	y = 4;
	
	printf("x:%d, y:%d\n", x, y);
	printf("x << y is %d\nx >> y is %d\n", x << y, x >> y);
	printf("octa x %o\t and octa y %o\n", x, y);
	printf("hex val of x 0x%X\t and 0x%X\n for y", x, y);

	int a = 0xFFFF;
	int b = 0x8888;
	int c = 0xABCD;
	int d = 0x4567;
	int e = 0xDCBA;
	int f = 0x1234;

	printf("a: 0x%X, b: 0x%X, a^b: 0x%X\n", a, b, a^b);
	printf("c: 0x%X, d: 0x%X, c & d: 0x%X\n", c, d, c & d);
	printf("e: 0x%X, f: 0x%x, e | f: 0x%X\n", e, f, e | f);

	char ch;

	printf("enter a character other than 'q' ");
	ch = getchar();
	getchar();
	for (; ch != 'q' ? 1 : 0;)
	{
		putchar(ch);
		putchar('\n');
		printf("enter a character other than 'q' ");
		ch = getchar();
		getchar();
	}


		/**
		 * while (c != 'q')
		 * {
		 * 	c = getchar();
		 * 	putchar(c);
		 */

	return (0);
}
