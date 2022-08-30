#include <stdio.h>

int sum(int, int);
void displaysum(int (*p)(int, int));

int main()
{
	//int s = 0;
	//int (*ptr)(int, int) = sum;

	displaysum(sum);

	return (0);
}

int sum(int a, int b)
{
	printf("enter 2 nums to be added: ");
	scanf("%d%d", &a, &b); // this overides the initial 5 and 7 passed.
	return (a + b);
}

//int

void displaysum(int (*p)(int, int))
{
	int sum = p(5, 7);
	printf("sum = %d\n", sum);
}
/*int factorial(int x)
{
        int retval = 1;

        if (x != 1)
        {
                retval = x * factorial(x - 1);
        }
        return (retval);
}
*/
