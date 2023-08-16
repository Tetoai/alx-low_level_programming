#include <stdio.h>
/**
 * main - Program to find first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	unsigned long int next;
	int i;

	printf("%d, ", term1);
	for (i = 1; i < 50; i++)
	{
		printf("%d", term2);
		next = term1 + term2;
		term1 = term2;
		term2 = next;
		if (1 != 49)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
