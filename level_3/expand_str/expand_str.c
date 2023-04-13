#include "unistd.h"

static void ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	expand_str(char *s)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t')
			space = 1;
		if (s[i] != ' ' && s[i] != '\t')
		{
			if (space == 1)
				write(1, "   ", 3);
			space = 0;
			ft_putchar(s[i]);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		expand_str(av[1]);
	}
	ft_putchar('\n');
	return (0);
}