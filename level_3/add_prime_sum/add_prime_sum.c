#include <unistd.h>

static void ft_putchar(char c)
{
	write(1, &c, 1);
}

static int ft_atoi(char *number)
{
	int	result;

	result = 0;
	while (*number >= '0' && *number <= '9')
	{
		result = result * 10 + (*number - '0');
		number++;
	}
	return (result);
}

static void	ft_putnbr(int number)
{
	if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
		ft_putchar(number + '0');
}

static int is_prime(int number)
{
	int	i;
	
	i = 3;
	if ((number % 2 == 0 && number > 2) || number <= 1)
		return (0);
	while (i < (number / 2))
	{
		if (number % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

static void	add_prime_sum(int number)
{
	int	sum_of_prime;

	sum_of_prime = 0;
	while (number > 0)
	{
		if (is_prime(number) == 1)
			sum_of_prime = sum_of_prime + number;
		number--;
	}
	ft_putnbr(sum_of_prime);
}

int	main(int ac, char **av)
{
	if (ac == 2 && av[1][0] != '-')
	{
		add_prime_sum(ft_atoi(av[1]));
	}
	if (ac != 2)
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}