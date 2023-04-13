/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:34:54 by wangthea          #+#    #+#             */
/*   Updated: 2023/01/05 15:05:56 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		if (av[i] >= 'A' && av[i] <= 'Z')
		{
			j = 'A';
			while (j <= av[i])
			{
				putchar(av[i]);
				j++;
			}
		}
		else if (av[i] >= 'a' && av[i] <= 'z')
		{
			j = 'a';
			while (j <= av[i])
			{
				putchar(av[i]);
				j++;
			}
		}
		else
			putchar(av[i]);
		i++;
	}
	putchar('\n');
}

int	main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	else
		putchar('\n');
	return (0);
}
