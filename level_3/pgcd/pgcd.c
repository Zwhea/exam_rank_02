#include <stdio.h>
#include <stdlib.h>

static void	pgcd(int a, int b)
{
	int	temp;

	temp = 0;
	if (a <= 0 || b <= 0)
		printf("\n");
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	printf("%d\n", a);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	if (ac != 3)
		printf("\n");
	return (0);
}