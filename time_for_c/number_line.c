#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Descripition: 'INPUT'
 * Reurn: Always 0 (Success)
 */
int main(void)
{
	int num;
		printf("Enter your number: ");
		scanf("%d", &num);
		if (num < 1)
		{
			printf("%d is a negative number");
		}
		else if (num > 1)
		{
		printf("%d is a positive number", num);
		}
		else if (num == 0)
		{
		printf("%d is neutral", num)
		}
	return (0);
}
