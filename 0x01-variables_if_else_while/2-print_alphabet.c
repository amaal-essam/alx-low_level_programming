#include <stdio.h>
/**
 * main -Entry point
 * print char in lower case
 * Return: Alaways 0 (success)
 */
int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

return (0);
}
