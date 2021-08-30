/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: z42r4n <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 12:24:48 by z42r4n            #+#    #+#             */
/*   Updated: 2021/08/30 12:27:48 by z42r4n           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		while (*av[ac - 1])
			write(1, av[ac - 1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}