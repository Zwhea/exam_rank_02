/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:15:23 by wangthea          #+#    #+#             */
/*   Updated: 2023/04/10 15:06:22 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	rev_print(char *av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	while (i >= 0)
	{
		ft_putchar(av[i]);
		i--;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_print(av[1]);
	ft_putchar('\n');
	return (0);
}
