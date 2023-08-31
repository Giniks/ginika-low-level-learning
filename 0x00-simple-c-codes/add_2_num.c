#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main()
{
	int num1;
	int num2;
	int sum_result;

	printf("Enter the first number: ");
	scanf("%d", &num1);

	printf("Enter the second number: ");
	scanf("%d", &num2);

	sum_result = num1 + num2;

	printf("Sum: %d\n", sum_result);

	return (0);
}

