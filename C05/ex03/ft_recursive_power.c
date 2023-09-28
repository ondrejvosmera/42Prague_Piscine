/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:18 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/20 11:11:49 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * (ft_recursive_power(nb, power - 1)));
}

/* int main() {
	int num = 3;
	int pwr = 3;
	int result = ft_recursive_power(num, pwr);
	printf("%d power %d is %d\n", num, pwr, result);
} */
