#include <stdio.h>
/**
  *main - Entry point
  *Description "Printing base 10 numbers with  a new line"
  *Return: Will be 0 (success)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
