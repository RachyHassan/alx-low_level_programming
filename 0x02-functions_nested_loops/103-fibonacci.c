#include <stdio.h>
/**
  * main- Entry point
  * description: sum of even fibonacci numbers
  * Return: always 0
  */
int main(void)
{
	int i = n0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;
	if (k % 2 == 0)
		sum += k;
	j = k - j;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
