#include <unistd.h>

static void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
}

static int	ft_atoi(char *nb)
{
	int result;

	result = 0;
	while (*nb >= '0' && *nb <= '9')
	{
		result = result * 10 + (*nb - '0');
		nb++;
	}
	return (result);
}

static void	tab_mult(int nb)
{
	int result;
	int i;

	i = 1;
	result = 0;
	while (i < 10)
	{
		result = i * nb;
		ft_putstr("1 x ");
		ft_putnbr(nb);
		ft_putstr(" = ");
		ft_putnbr(result);
		write (1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		tab_mult(ft_atoi(av[1]));
	if (ac != 2)
		write(1, "\n", 1);
	return (0);
}