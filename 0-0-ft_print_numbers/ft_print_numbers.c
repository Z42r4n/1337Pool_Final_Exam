/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: z42r4n <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 14:26:47 by z42r4n            #+#    #+#             */
/*   Updated: 2021/08/29 14:30:22 by z42r4n           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "0123456789\n", 11);
}

/*	# test

int	main(void)
{
	ft_print_numbers();
	return (0);
}

*/