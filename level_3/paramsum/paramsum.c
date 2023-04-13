#include <unistd.h>

static void ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr(int number)
{
	if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else if (number >= 0 && number <= 9)
		ft_putchar(number + '0');
}

int	main(int ac, char **av)
{
	(void)av;
	if (ac == 1)
		write(1, "0", 1);
	else
		ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}