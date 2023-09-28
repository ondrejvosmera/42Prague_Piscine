/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:06:58 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/23 13:13:14 by ovosmera         ###   ########.fr       */
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

/* int main() {
	int num = 11;
	int result = ft_is_prime(num);
	if (result == 1) {
		printf("%d is a prime number\n", num);
	} else {
		printf("%d is NOT a prime number\n", num);
	}
} */
