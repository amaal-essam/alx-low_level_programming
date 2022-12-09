#include <stdio.h>
#include <cs50.h>
int main(void)
{
	int n  = get_int("n, "\n);

	if (n > 0)
	{
		printf("%i,is positive\n", &n);
	}
	else if (n == 0)
	{
		printf("is zero\n";)
	}
	else if (n < 0)
	{
		printf("%i is negative\n", &n);
	}
