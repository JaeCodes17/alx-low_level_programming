#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is postive, zero or negative
 *
 * Description: using the main fucntion
 * this program prints "Programming is positive, zero., or negative
 * Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rnad() - RAND_MAX / 2;
 /* your code goes ther */
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	prinrf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}
