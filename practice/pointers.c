#include <stdio.h>

int main()
{
	int b = 10;
	int a[] = {10, 11, -1, 56, 67, 5, 4};
	int *p, *q;
	p = a;
	q= &a[0] + 3;

	printf("%d %d %d %d %d %d %d\n", b++, b = (b + 6), b + 2, b + 5, b++, b--, b += 5);

	printf("%d\t%d\t%d\n", (*p)++, (*p)++, *(++p)); // 12, 11, 11	*p = 13
	printf("%d\n", *p); // 13
	printf("%d\n", (*p)++); // 13	*p = 14
	printf("%d\n", (*p)++); // 14	*p = 15

	q--; // &a[2]
	
	printf("%d\n", (*(q + 2))--); // 67	*q = -1
	printf("%d\n", *(p + 2) - 2); // 54	*p = 15
	printf("%d\n", *(p++ - 2) - 1); // garbage val		*p = -1
	printf("%d\n", *p); // -1
	printf("%d\n", *q); // -1

	/**
	 * *++p will increment the pointer
	 * ++*p will increment the value it points to
	 **/

	return 0;
}
