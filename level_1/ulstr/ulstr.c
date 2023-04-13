/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 20:46:52 by wangthea          #+#    #+#             */
/*   Updated: 2023/04/01 14:05:31 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ulstr(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
			ft_putchar(string[i] + 32);
		else if (string[i] >= 'a' && string[i] <= 'z')
			ft_putchar(string[i] - 32);
		else
			ft_putchar(string[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ulstr(av[1]);
	ft_putchar('\n');
	return (0);
}
