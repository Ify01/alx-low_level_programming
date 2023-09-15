#include <stdio.h>

/**
 * main - printing the FizzBuzz in multiple occurance
 * Return: success or error
 */

int main(void)
{
	int fizzBuzzing;

	for (fizzBuzzing = 1; fizzBuzzing <= 100; fizzBuzzing++)
	{
		if (fizzBuzzing % 3 == 0 && fizzBuzzing % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (fizzBuzzing % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (fizzBuzzing % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", fizzBuzzing);
		}
	}
	return (0);
}
