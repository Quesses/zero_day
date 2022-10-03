#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char str[50];

	//fp =  fopen("C:/Users/Public/Documents/test.txt", "w");
	fp =  fopen("test.txt", "w");

	printf("Enter string: ");
	//scanf("%s", str); wont continue reading after space
	gets(str);
	
	if (fp == NULL)
	{
		printf("unable to create and open file");
		exit(1);
	}

	//for(int i = 0; str[i] != '\0'; i++)
	//	fputc(str[i], fp);
	
	fputs(str, fp);
	printf("you entered: %s", str);

	fclose(fp);

	return (0);
}
