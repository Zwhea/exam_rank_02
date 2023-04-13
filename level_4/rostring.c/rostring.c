#include <unistd.h>

static void	rostring(char *s)
{
	int	i;
	int	start;
	int	end;
	int	space;

	i = 0;
	space = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	start = i;
	while (s[i] != '\0' && s[i] != ' ' && s[i] != '\t')
		i++;
	end = i;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	while (s[i])
	{
		while ((s[i] == ' ' && s[i + 1] == ' ') || (s[i] == '\t' && s[i + 1] == '\t'))
            i++; 
        if (s[i] == ' ' || s[i] == '\t')
            space = 1;
        write(1, &s[i], 1);
        i++;
	}
	if (space)
		write(1, " ", 1);
	while (start < end)
	{
		write(1, &s[start], 1);
		start++;
	}
}

int main(int ac, char **av)
{
	if (ac == 1)
		write (1, "\n", 1);
	else
	{
		rostring(av[1]);
		write (1, "\n", 1);
	}
	return (0);
}