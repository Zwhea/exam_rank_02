#include <unistd.h>

static void	last_word(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	i = i - 1;
	while (string[i] == ' ' || string[i] == '\t')
		i--;
	while (i >= 0 && (string[i] != ' ' && string[i] != '\t'))
		i--;
	i++;
	while (string[i])
	{
		write(1, &string[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		last_word(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}