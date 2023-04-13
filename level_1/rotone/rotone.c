/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:59:59 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/31 21:42:22 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if ((av[i] >= 'A' && av[i] <= 'Y') || (av[i] >= 'a' && av[i] <= 'y'))
			ft_putchar(av[i] + 1);
		else if (av[i] == 'Z' || av[i] == 'z')
			ft_putchar(av[i] - 25);
		else
			ft_putchar(av[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}
