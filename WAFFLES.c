#include <stdio.h>

/**
 * main - prints exactly "We don't have a name for our group yet"
 * Description: using putchar function
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'We don't have a name for our group yet';)
		putchar(c);
	putchar('\n');
	return (0);
}

