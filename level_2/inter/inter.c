#include <unistd.h>
#include <stdbool.h>

static bool ft_strchr(char *s1, char c, int position)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && i < position)
	{
		if (s1[i] == c)
			return (false);
		i++;
	}
	return (true);
}

static void	inter(char *s1, char *s2)
{
	int	i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i] != s2[j] && s2[j] != '\0')
			j++;
		if (ft_strchr(s1, s1[i], i) == true && s1[i] == s2[j])
			write(1, &s1[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}
	write (1, "\n", 1);
	return (0);
}
