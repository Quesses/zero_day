#include <stdio.h>


void jack_bauer()
{
/*	using printf
 *	int w, x:

	for (w = 0; w < 24; w++)
	{
		for (x = 0; x < 60; x++)
		{
			w < 10 ? printf("0%d:", w) : printf("%d:", w);
		x < 10 ? printf("0%d\n", x) : printf("%d\n", x);
	}
}
*/


/* using only putchar */
int w = 0, x = 0, y = 0, z = 0, i = 0;
while (i < (24 * 60))
{
	putchar(w + '0');		
	putchar(x + '0');
	putchar(':');
	putchar(y + '0');
	putchar(z + '0');
	putchar('\n');

	z++;
	if (z > 9)
		{
			z = 0;
			y++;
		}
		if (y > 5)
		{
			y = 0;
			x++;
		}
		if (x > 9)
		{
			x = 0;
			w++;
		}
		if (w == 2 && x > 3)
		{
			for (char *str = "jack bauer done\n",z = 0;
					str[z] != '\0'; z++)
				putchar(str[z]);
			break;
		}
		i++;
	}
}

void times_table(int i)
{
	int x, y, z = 0;

	for (x = 0; x <= i; x++)
	{
		for (y = 0; y <= i; y++)	
			printf("%d\t", x * y);	
		putchar('\n');	
	}
}

int largest_num(int x, int y, int z)
{
	int largest;
	largest = x > y ? (x > z ? x : z) : (y > z ? y: z);

	return (largest);
}

void fibonacci(void);

int main()
{
	int *ptr;
	char *pt;
	float *p;

	puts("I love love");

	printf("sizeof int ptr is %lu\n sizeof char ptr is %lu\n sizeof float ptr is %lu\n", sizeof(ptr), sizeof(pt), sizeof(p));

	jack_bauer();

	times_table(10);

	fibonacci();

	printf("\nlargest num is %d\n", largest_num(3, 5, 10));
	printf("\nlargest num is %d\n", largest_num(10, 5, 3));
	printf("\nlargest num is %d\n", largest_num(5, 3, 10));
	printf("\nlargest num is %d\n", largest_num(5, 10, 3));

	return (0);
}

void fibonacci()
{
	unsigned long int fib = 2, x = 1, y = 1, sumEven = 0, sumOdd = 0, sumPrime = 0;
	int count;

	printf("%ld, ", x);
	for (count = 1; count < 98; count++)
	{
		/* printf("%ld, ", fib);	//1,
		fib += y;// 2
		y = fib;// 2 */

		if (count == 49)
			printf("%ld\n", fib);
		else
			printf("%ld, ", fib); //2,
		if (fib % 2 == 0 && fib <= 4000000)
			sumEven += fib;
		else if (fib % 2 != 0 && fib <= 4000000)
			sumOdd += fib;
		if (fib % fib == 0 && fib <= 4000000)
			sumPrime += fib;

		y = fib;//2
		fib += x;// 3
		x = y;//2
	}
	printf("sum of even fibonaci is %ld\nsum of odd fibonaci is %ld\n", sumEven, sumOdd);
	printf("sum of prime fibonaci is %ld\n", sumPrime);

	int a, b;
	a = 5, 7, 10;// 5 is return into a
	printf("%d a\n", a);
	b = a, a = sumPrime;
	printf("%d new a and b is %d\n", a, b);
}
