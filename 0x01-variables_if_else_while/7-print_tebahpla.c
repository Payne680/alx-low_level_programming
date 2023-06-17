#include <stdio.h>
/**
  3   *main - Entry point
  4   *Description "Print alpahbets in reverse"
  5   *Return: Will be 0 (success)
  6   */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
