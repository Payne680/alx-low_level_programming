#include <stdio.h>
#include <unistd.h>
/**
  *main - main entry point
  *Return: Will return 1
  */
int main(void)
{
	char *message = "and that piece of art is useful\n";
	write(2, "Dora Korpar, 2015-10-19, ", 26);
	write(2, message, 28);
	return (1);
}
