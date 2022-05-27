/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0-repeat-alpha.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: z42r4n <z42r4n@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:24:28 by z42r4n            #+#    #+#             */
/*   Updated: 2022/05/27 18:31:46 by z42r4n           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

int	count(char c)
{
	int	rpt;

	if (c >= 'A' && c <= 'Z')
		rpt = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		rpt = c - 'a' + 1;
	else
		rpt = 1;
	return (rpt);
}

int	main(int ac, char **av)
{
	int	rpt;

	if (ac == 2)
	{
		while (*av[1])
		{
			rpt = count(*av[1]);
			while (rpt--)
				write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}