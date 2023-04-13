#include <unistd.h>

static void	alpha_mirror(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = 'Z' - s[i] + 'A';
		else if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = 'z' - s[i] + 'a';
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		alpha_mirror(av[1]);
	}
	write(1, "\n", 1);
	return(0);
}
