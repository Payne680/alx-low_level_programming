#include <stdio.h>
/**
  *main - Entry point
  *Description "Print base 10 numbers"
  *Return: Always be 0 (success)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
