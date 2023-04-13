#include <unistd.h>

static void	str_capitalizer(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if (i != 0 && (s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' || \
		s[i - 1] == '\t'))
			s[i] -= 32;
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac < 2)
		write(1, "\n", 1);
	else
	{
		while (i < ac)
		{
			str_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}