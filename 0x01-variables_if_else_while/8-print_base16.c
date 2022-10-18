#include <stdio.h>

/**
  *main - prints out all the number in base 16 in lowercase
  *Return: 0
  */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		puchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
