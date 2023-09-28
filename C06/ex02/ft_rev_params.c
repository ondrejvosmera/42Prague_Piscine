/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:12:42 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/23 14:30:07 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = argc;
	if (argc > 0)
	{
		while (i > 1)
		{
			str = argv[i - 1];
			while (*str != '\0')
			{
				write(1, str, 1);
				str++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
