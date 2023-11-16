/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yago <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:34:21 by mel-yago          #+#    #+#             */
/*   Updated: 2023/10/01 11:16:24 by mel-yago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char	*argv[])
{
	int	i;

	i = 0;
	while (argv[0][i] && argc)
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
