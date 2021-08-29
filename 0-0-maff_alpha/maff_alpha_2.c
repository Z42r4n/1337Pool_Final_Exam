/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: z42r4n <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 20:35:52 by z42r4n            #+#    #+#             */
/*   Updated: 2021/08/29 20:49:00 by z42r4n           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	c;
	char	tmp;

	c = 'a' - 1;
	while (++c <= 'z')
	{
		tmp = !(c % 2) ? c - 32 : c;
		write(1 , &tmp, 1);
	}
	write(1, "\n", 1);
	return (0);
}
