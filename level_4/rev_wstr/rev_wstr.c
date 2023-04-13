#include <unistd.h>

static void rev_wstr(char *s)
{
	int	i;
	int start;
	int	end;
	int	space;

	i = 0;
	start = 0;
	end = 0;
	space = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		while (s[i] == '\0' || s[i] == ' ' || s[i] == '\t')
			i--;
		end = i;
		while (s[i] && s[i] != ' ' && s[i] != '\t')
			i--;
		start = i + 1;
		space = 1;
		while (start <= end)
		{
			write (1, &s[start], 1);
			start++;
		}
		if (space != 0)
		{
			write (1, " ", 1);
			space = 0;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rev_wstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}