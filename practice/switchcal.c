#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main (void)
{
	char op;
	double num1, num2, result;

	printf("Enter an operator ['+' '-' '*' '/']: ");
	scanf("%c", &op);

	printf("Enter two numbers: ");
	scanf("%lf%lf", &num1, &num2);

	switch (op)
	{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		
		default:
			printf("invalid Operator\n");

	}
	printf("result: %lf\n", result);

/**	int num;

	printf("Enter a number between 1 - 7: ");
	scanf("%d", &num);

	switch(num)
	{
	//print days of the week using switch
		case 1:
			printf("Sunday\n");
			break;

		case 2:
			printf("Monday\n");
			break;

		case 3:
			printf("Tuesday\n");
			break;

		case 4:
			printf("Wednesday\n");
			break;

		case 5:
			printf("Thursday\n");
			break;

		case 6:
			printf("Friday\n");
			break;	
		
		case 7:
			printf("Saturday\n");
			break;
		
		default:
			printf("invalid number\n");
	}

	//print if a day is weekday oe weekend
	switch(num)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			printf("Weekday\n");
			break;

		case 1:
		case 7:
			printf("Weekend\n");
			break;
	}
*/

	return (0);
}
