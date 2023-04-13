#include <stdio.h>
#include <stdlib.h>

static void	fprime(int prime)
{
	int i;

	if (prime == 1)
		printf("1");
	i = 2;
	while(prime >= i)
	{
		if (prime % i == 0)
		{
			printf("%d", i);
			if (prime == i)
				break ;
			printf("*");
			prime /= i;
			i = 1;
		}
		i++;
	}
}

int main(int ac ,char **av)
{
	if (ac == 2)
	{
		fprime(atoi(av[1]));
	}
	printf("\n");
	return (0);
}