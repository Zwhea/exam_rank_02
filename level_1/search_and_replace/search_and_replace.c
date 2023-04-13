/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 20:56:56 by wangthea          #+#    #+#             */
/*   Updated: 2023/04/01 14:00:51 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	search_and_replace(char *string, char search, char replace)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == search)
			string[i] = replace;
		ft_putchar(string[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4 && !av[2][1] && !av[3][1])
		search_and_replace(av[1], av[2][0], av[3][0]);
	ft_putchar('\n');
	return (0);
}
