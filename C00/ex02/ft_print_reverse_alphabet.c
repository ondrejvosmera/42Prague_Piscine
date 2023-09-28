/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:11:56 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/28 13:20:31 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	current;

	current = 'z';
	while (current >= 'a')
	{
		write(1, &current, 1);
		current--;
	}
}

/* int main()
{
	ft_print_reverse_alphabet();
	return 0;
}
 */
