/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: z42r4n <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 19:52:30 by z42r4n            #+#    #+#             */
/*   Updated: 2021/08/29 20:06:23 by z42r4n           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] && *av[1] != 'a')
			av[1]++;
		if (*av[1])
			write (1, "a", 1);
	}
	else
		write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}
