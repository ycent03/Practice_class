#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Descripition: 'INPUT'
 * Reurn: Always 0 (Success)
 */
int main(void)
	char Name[100];
{
		printf("Enter your name: ");
		fgets(Name, 100, stdin);
		printf("Hello user your name is %s\n", Name)
	return (0);
}
