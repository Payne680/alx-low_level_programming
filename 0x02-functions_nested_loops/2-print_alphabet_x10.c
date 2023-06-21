#include "main.h"
/**
    *print_alphabet_10x - prints the alpahbet 10 times
    *
     *Return: Will be 0 (success)
  */
void print_alphabet_10x(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	}
