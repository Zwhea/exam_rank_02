/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:36:24 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/31 21:40:49 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if ((av[i] >= 'A' && av[i] <= 'M') || (av[i] >= 'a' && av[i] <= 'm'))
			ft_putchar(av[i] + 13);
		else if ((av[i] >= 'N' && av[i] <= 'Z')
			|| (av[i] >= 'n' && av[i] <= 'z'))
			ft_putchar(av[i] - 13);
		else
			ft_putchar(av[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	ft_putchar('\n');
	return (0);
}
