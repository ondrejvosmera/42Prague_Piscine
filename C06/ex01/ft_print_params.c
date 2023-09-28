/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:43:59 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/23 14:11:24 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 1;
	if (argc > 0)
	{
		while (i < argc)
		{
			str = argv[i];
			while (*str != '\0')
			{
				write(1, str, 1);
				str++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
