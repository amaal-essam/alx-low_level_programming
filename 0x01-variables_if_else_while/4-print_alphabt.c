#include <stdio.h>
/**
 *main - Entry point
 *
 * print char in lowercase except q,e
 *
 * Return: Alaways 0(Success)
 */
int main(void)
{
	char ch;

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
return (0);
}
