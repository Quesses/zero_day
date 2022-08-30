#include <stdio.h>
#include <stdlib.h>


char* rot13(char p[])
{
	int x = 0, y = 0;
	char a[] = "ABCDEFGHJIKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHJIKLMnopqrstuvwxyzabcdefghijklm";

	while (p[x] != '\0')
	{
		if (p == NULL)
			return (NULL);
		if (p[x] == a[y])
		{
			p[x] = rot[y];
			x++;
		}
		y++;
		if (a[y] == '\0' && rot[y] == '\0')
			y = 0;
	}
	return (p);
}

int main()
{
	char str[] = "jenny";
	char *strP;

	strP = rot13(str);

	printf("encoded string is %s\n", strP);

	return (0);
}
