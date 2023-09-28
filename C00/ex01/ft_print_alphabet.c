/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:45:14 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/28 13:20:38 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	current;

	current = 'a';
	while (current <= 'z')
	{
		write(1, &current, 1);
		current++;
	}
}

/* int main()
{
	ft_print_alphabet();
	return 0;
} */
