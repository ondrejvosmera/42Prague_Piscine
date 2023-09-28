/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:21:15 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/23 16:05:37 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;

	if (argc > 0)
	{
		str = argv[0];
		while (*str != '\0')
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
