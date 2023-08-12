#include <stdio.h>
/**
 * main - prints all possible combinations of single digits
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '0')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
