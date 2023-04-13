#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	hidenp(char *s1, char *s2)
{
	int len;
	int i;
	int j;

	len = 0;
	i = 0;
	j = 0;
	while (s1[len])
		len++;
	while (s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (i == len)
		ft_putchar('1');
	else
		ft_putchar('0');
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		hidenp(av[1], av[2]);
	}
	ft_putchar('\n');
	return (0);
}