#include <stdio.h>
#include <stdlib.h>

static void do_op(char *a, char symbol, char *b)
{
	if (symbol == '+')
		printf("%d", (atoi(a) + atoi(b)));
	if (symbol == '-')
		printf("%d", (atoi(a) - atoi(b)));
	if (symbol == '*')
		printf("%d", (atoi(a) * atoi(b)));
	if (symbol == '/')
		printf("%d", (atoi(a) / atoi(b)));
	if (symbol == '%')
		printf("%d", (atoi(a) % atoi(b)));
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		do_op(av[1], av[2][0], av[3]);
	}
	printf("\n");
	return (0);
}
