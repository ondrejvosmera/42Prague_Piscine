/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:03:41 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/20 11:11:15 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		if (nb == 0)
		{
			return (1);
		}
	}
	while (power > 0)
	{
		result = result * nb;
		--power;
	}
	return (result);
}

/* int main() {
	int num = 3;
	int pwr = 3;
	int result = ft_iterative_power(num, pwr);
	printf("%d power %d is %d\n", num, pwr, result);
} */
