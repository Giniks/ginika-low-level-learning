#include <stdio.h>

/**
 * main - Entry pount
 * Return: Always 0
 */
int main()
{
	int number;
	unsigned long long factorial = 1;

	printf("Please enter a number: ");
	scanf("%d", &number);

	if (number < 0)
	{
		printf("An invalid factorial due to negative number.\n");
	}
	else
	{
		for (int k = 1; k <= number; k++)
		{
			factorial *= k;
		}
	}
	printf("factorial of %d = %llu\n", number, factorial);

	return (0);
}

