#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-entry point
 * generating a random number
 * return:Alaway sucess (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("is zero\n");
	else if (n < 0)
		printf("%d is negative\n",  n);
return (0);
}
