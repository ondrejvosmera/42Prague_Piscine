/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:07:26 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/23 13:13:26 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_is_prime(int nb)
{
	long long	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb <= 3)
	{
		return (1);
	}
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

/* int main() {
	int num = 4;
	int result = ft_find_next_prime(num);
	printf("%d is a next prime number after %d\n", result, num);
} */
