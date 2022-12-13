#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * print a-z to small
 * Return: Alawys 0(Success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
return (0);
}
