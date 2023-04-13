#include <unistd.h>

int	ft_atoi(char *nbr)
{
	int result;

	result = 0;
	while (*nbr >= '0' && *nbr <= '9')
	{
		result = result * 10 + (*nbr - '0');
		nbr++;
	}
	return (result);
}

static void	print_hex(int nbr)
{
	char	*hex_base = "0123456789abcdef";

	if (nbr > 16)
		print_hex(nbr / 16);
	write(1, &hex_base[nbr % 16], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}