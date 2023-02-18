#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits.
 * All your code should be in the main function
 * Retrun: 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (c < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
