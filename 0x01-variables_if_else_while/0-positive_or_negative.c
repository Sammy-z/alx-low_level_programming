#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * return: renturn 0 (currect/success)
 */
int main(void)
{
int n:
srand(time(0)):
n = rand() - RAND_MAX / 2;
if (n==0)
{
printf("%i is zero\n", n);
}
else if (n<0)
{
printf("%i is negative\n" n);
}
else
{
printf("%i is positive\n" n);
}
return (0);
}
